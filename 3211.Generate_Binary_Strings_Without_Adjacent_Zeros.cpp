class Solution
{
public:
    void helper(vector<string> &ans, string s, int i, int n, char lastChar)
    {
        if (i == n)
        {
            ans.push_back(s);
            return;
        }

        s.push_back('1');
        helper(ans, s, i + 1, n, '1');
        s.pop_back();

        if (lastChar != '0')
        {
            s.push_back('0');
            helper(ans, s, i + 1, n, '0');
            s.pop_back();
        }
    }

    vector<string> validStrings(int n)
    {
        vector<string> ans;
        helper(ans, "", 0, n, '1');
        return ans;
    }
};