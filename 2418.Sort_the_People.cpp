class Solution
{
public:
    vector<string> sortPeople(vector<string> &names, vector<int> &heights)
    {
        vector<string> res;

        map<int, string> mp;

        for (int i = 0; i < names.size(); i++)
        {
            mp[heights[i]] = names[i];
        }

        for (auto it : mp)
        {
            res.insert(res.begin(), it.second);
        }

        return res;
    }
};