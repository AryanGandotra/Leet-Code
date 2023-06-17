class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        unordered_map<string, vector<string>> map1;

        if (strs.size() == 1)
            return {{strs[0]}};

        for (string s : strs)
        {
            string t = s;
            sort(t.begin(), t.end());
            map1[t].push_back(s);
        }

        vector<vector<string>> result;

        for (auto i : map1)
        {
            result.push_back(i.second);
        }

        return result;
    }
};