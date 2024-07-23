class Solution
{
public:
    vector<int> frequencySort(vector<int> &nums)
    {
        unordered_map<int, int> freq;

        for (int i = 0; i < nums.size(); i++)
        {
            freq[nums[i]]++;
        }

        map<int, vector<int>> freqGroup;

        for (auto it : freq)
        {
            freqGroup[it.second].push_back(it.first);
        }

        vector<int> res;

        for (auto it : freqGroup)
        {
            if (it.second.size() > 1)
            {
                sort(it.second.rbegin(), it.second.rend());
            }

            for (auto itr : it.second)
            {
                for (int i = 0; i < it.first; i++)
                {
                    res.push_back(itr);
                }
            }
        }
        return res;
    }
};