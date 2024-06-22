class Solution
{
public:
    int dp[21][20001];

    int getSum(vector<int> &arr, int n)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }
        return sum;
    }

    int getSubsetCountWithGivenSum(vector<int> &arr, int n, int sum)
    {
        // Initialize dp array
        memset(dp, 0, sizeof(dp));
        for (int i = 0; i <= n; i++)
        {
            dp[i][0] = 1;
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j <= sum; j++)
            {
                if (arr[i - 1] <= j)
                {
                    dp[i][j] = dp[i - 1][j - arr[i - 1]] + dp[i - 1][j];
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }

        return dp[n][sum];
    }

    int CountNoOfSubsetOfGivenDifference(vector<int> &arr, int n, int diff)
    {
        int sum = getSum(arr, n);
        if ((diff + sum) % 2 != 0 || sum < diff)
            return 0;
        int s1 = (diff + sum) / 2;
        if (s1 < 0 || s1 > 20000)
            return 0;
        return getSubsetCountWithGivenSum(arr, n, s1);
    }

    int findTargetSumWays(vector<int> &nums, int target)
    {
        int sum = getSum(nums, nums.size());
        if (sum < abs(target) || (sum + target) % 2 != 0)
        {
            return 0;
        }
        return CountNoOfSubsetOfGivenDifference(nums, nums.size(), abs(target));
    }
};
