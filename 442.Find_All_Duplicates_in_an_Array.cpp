class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {
        vector<int> result;
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

        map<int, int>::iterator it = map1.begin();

        while (it != map1.end())
        {
            if (it->second == 2)
            {
                result.push_back(it->first);
            }
            it++;
        }
        return result;
    }
};