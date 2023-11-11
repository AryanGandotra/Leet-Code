class Solution
{
public:
    void findSubsets(int ind, vector<int> &nums, vector<int> &result, vector<vector<int>> &ans)
    {
        ans.push_back(result);

        for (int i = ind; i < nums.size(); i++)
        {
            if (i != ind && nums[i] == nums[i - 1])
                continue;
            result.push_back(nums[i]);
            findSubsets(i + 1, nums, result, ans);
            result.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());

        vector<vector<int>> ans;
        vector<int> result;

        findSubsets(0, nums, result, ans);

        return ans;
    }
};