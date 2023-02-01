class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        unordered_map<int, int> map;
        int a;
        for (int i = 0; i < nums.size(); i++)
        {
            unordered_map<int, int>::iterator it = map.find(nums[i]);
            if (it != map.end())
            {
                it->second++;
            }
            else
            {
                map.insert({nums[i], 1});
            }
        }
        for (auto it = map.begin(); it != map.end(); it++)
        {
            if (it->second == 1)
            {
                a = it->first;
            }
        }
        return a;
    }
};