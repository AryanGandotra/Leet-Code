class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int n = nums.size();
        int n1 = n / 2;
        cout << "size of nums: " << n << endl;
        cout << "n1: " << n1 << endl;
        int result;
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
        for (auto i = map1.begin(); i != map1.end(); i++)
        {
            if (i->second > n1)
            {
                result = i->first;
            }
        }

        return result;
    }
};