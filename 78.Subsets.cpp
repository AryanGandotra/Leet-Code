class Solution
{
public:
    void solve(vector<int> nums, vector<int> output, int i, vector<vector<int>> &ans)
    {
        if (i > nums.size() - 1)
        {
            ans.push_back(output);
            return;
        }

        // exclude
        solve(nums, output, i + 1, ans);

        // include

        int element = nums[i];
        output.push_back(element);
        solve(nums, output, i + 1, ans);
    }
    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<vector<int>> ans;
        vector<int> output;
        int i = 0;

        solve(nums, output, i, ans);

        return ans;
    }
};