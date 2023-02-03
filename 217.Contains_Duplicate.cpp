class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        if (nums.size() == 0)
        {
            return false;
        }
        int repeat = false;
        unordered_map<int, int> map;
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
            if (it->second > 1)
            {
                repeat = true;
                break;
            }
        }
        return repeat;
    }
};