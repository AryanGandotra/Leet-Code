class Solution
{
public:
    void solve(int index, int target, vector<int> &arr, vector<int> &result, vector<vector<int>> &ans)
    {
        if (target == 0)
        {
            ans.push_back(result);
            return;
        }

        for (int i = index; i < arr.size(); i++)
        {
            if (i > index && arr[i] == arr[i - 1])
                continue;

            if (arr[i] > target)
                break;

            result.push_back(arr[i]);
            solve(i + 1, target - arr[i], arr, result, ans);
            result.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
    {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> result;

        solve(0, target, candidates, result, ans);

        return ans;
    }
};