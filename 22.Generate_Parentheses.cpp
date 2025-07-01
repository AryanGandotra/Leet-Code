class Solution
{
public:
    void helper(vector<string> &ans, string s, int n, int open, int close)
    {
        if (open == n && close == n)
        {
            ans.push_back(s);
            return;
        }

        if (open < n)
            helper(ans, s + '(', n, open + 1, close);

        if (close < open)
            helper(ans, s + ')', n, open, close + 1);
    }
    vector<string> generateParenthesis(int n)
    {
        vector<string> ans;
        helper(ans, "", n, 0, 0);
        return ans;
    }
};