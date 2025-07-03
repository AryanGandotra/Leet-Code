class Solution
{
public:
    void helper(vector<vector<int>> &ans, vector<int> &result, int startingNumber, int k, int n)
    {
        if (k < 0 || n < 0)
            return;

        if (k == 0 && n == 0)
        {
            ans.push_back(result);
            return;
        }

        for (int i = startingNumber; i <= 9; i++)
        {
            result.push_back(i);
            helper(ans, result, i + 1, k - 1, n - i);
            result.pop_back();
        }
    }

    vector<vector<int>> combinationSum3(int k, int n)
    {
        vector<vector<int>> ans;
        vector<int> result;
        int startingNumber = 1;
        helper(ans, result, startingNumber, k, n);
        return ans;
    }
};