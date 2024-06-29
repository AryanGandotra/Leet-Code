class Solution
{
public:
    int dp[101];

    int solve(vector<int> &nums, int n)
    {
        if (n <= 0)
            return 0;
        if (n == 1)
            return nums[0];

        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);

        for (int i = 2; i < n; i++)
        {
            dp[i] = max(dp[i - 1], dp[i - 2] + nums[i]);
        }

        return dp[n - 1];
    }

    int rob(vector<int> &nums)
    {

        int n = nums.size();

        if (n == 1)
            return nums[0];

        vector<int> nums1(nums.begin() + 1, nums.end());
        vector<int> nums2(nums.begin(), nums.end() - 1);

        memset(dp, 0, sizeof(dp));
        int result1 = solve(nums1, n - 1);

        memset(dp, 0, sizeof(dp));
        int result2 = solve(nums2, n - 1);

        return max(result1, result2);
    }
};