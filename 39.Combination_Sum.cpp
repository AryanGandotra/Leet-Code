class Solution
{
public:
    void solve(int index, vector<int> &arr, int target, vector<int> &result, vector<vector<int>> &ans)
    {
        if (index == arr.size())
        {
            if (target == 0)
            {
                ans.push_back(result);
            }
            return;
        }

        if (arr[index] <= target)
        {
            result.push_back(arr[index]);
            solve(index, arr, target - arr[index], result, ans);
            result.pop_back();
        }
        solve(index + 1, arr, target, result, ans);
    }

    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<vector<int>> ans;
        vector<int> result;

        solve(0, candidates, target, result, ans);

        return ans;
    }
};