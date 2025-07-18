class Solution
{
public:
    int firstUniqChar(string s)
    {
        map<char, pair<int, int>> mp;

        for (int i = 0; i < s.length(); i++)
        {
            mp[s[i]] = {i, mp[s[i]].second + 1};
        }

        int ans = INT_MAX;

        for (auto x : mp)
        {
            if (x.second.second == 1)
                ans = min(ans, x.second.first);
        }

        return ans == INT_MAX ? -1 : ans;
    }
};