class Solution
{
public:
    int mostFrequentEven(vector<int> &nums)
    {
        map<int, int> map1;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] % 2 == 0)
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
        }

        int max = -1;
        int freq = 0;
        for (auto itr = map1.rbegin(); itr != map1.rend(); itr++)
        {
            if (freq <= itr->second)
            {
                max = itr->first;
                freq = itr->second;
            }
        }
        return max;
    }
};