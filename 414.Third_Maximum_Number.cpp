class Solution
{
public:
    int thirdMax(vector<int> &nums)
    {
        int max = INT_MIN;
        int result;
        vector<int> numbers;

        for (int i = 0; i < nums.size(); i++)
        {
            if (max < nums[i])
            {
                max = nums[i];
            }
        }
        if (nums.size() < 3)
        {
            return max;
        }
        else
        {
            map<int, int> map1;
            for (int i = 0; i < nums.size(); i++)
            {
                auto it = map1.find(nums[i]);
                if (it == map1.end())
                {
                    map1.insert(it, pair<int, int>(nums[i], 1));
                }
                else
                {
                    it->second++;
                }
            }

            for (int i = 0; i < map1.size(); i++)
            {
                numbers.push_back(0);
            }

            map<int, int>::iterator itr = map1.begin();
            int count = 1;

            int j = 0;
            while (itr != map1.end())
            {
                numbers[j] = itr->first;
                j++;
                itr++;
            }

            for (int i = numbers.size() - 1; i >= 0; i--)
            {
                if (map1.size() == 2 || map1.size() == 1)
                {
                    return numbers[numbers.size() - 1];
                }
                if (i == numbers.size() - 3)
                {
                    result = numbers[i];
                }
            }
        }
        return result;
    }
};