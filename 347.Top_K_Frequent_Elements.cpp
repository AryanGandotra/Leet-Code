class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        unordered_map<int, int> map1;
        map<int, vector<int>> map2;
        vector<int> result;

        for (int num : nums)
        {
            map1[num]++;
        }

        int count = 0;

        for (auto a : map1)
        {
            map2[a.second].push_back(a.first);
        }

        map<int, vector<int>>::reverse_iterator it;

        for (it = map2.rbegin(); it != map2.rend(); it++)
        {
            for (int i = 0; i < it->second.size(); i++)
            {
                if (count == k)
                    break;
                result.push_back(it->second[i]);
                count++;
            }
        }
        return result;
    }
};
