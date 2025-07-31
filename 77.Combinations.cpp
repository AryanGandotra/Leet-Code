class Solution
{
public:
    void solve(vector<int> &currList, vector<vector<int>> &result, int n,
               int k)
    {
        if (k == 0)
        {
            result.push_back(currList);
            return;
        }

        if (n == 0)
            return;

        // pick

        currList.push_back(n);

        solve(currList, result, n - 1, k - 1);

        currList.pop_back();

        // not pick

        solve(currList, result, n - 1, k);
    }
    vector<vector<int>> combine(int n, int k)
    {
        vector<vector<int>> result;
        vector<int> currList;
        solve(currList, result, n, k);

        return result;
    }
};