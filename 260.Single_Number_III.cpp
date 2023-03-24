class Solution
{
public:
    vector<int> singleNumber(vector<int> &nums)
    {
        map<int, int> map1;
        vector<int> result;

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

        for (auto itr = map1.begin(); itr != map1.end(); itr++)
        {
            if (itr->second == 1)
            {
                result.push_back(itr->first);
            }
        }

        return result;
    }
};