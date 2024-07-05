class Solution
{
public:
    int dp[1001];

    int helper(vector<int> cost, int ind)
    {
        dp[0] = cost[0];
        dp[1] = cost[1];

        for (int i = 2; i <= ind; i++)
        {

            int oneJump, twoJump = INT_MAX;

            oneJump = cost[i] + dp[i - 1];
            twoJump = cost[i] + dp[i - 2];
            dp[i] = min(oneJump, twoJump);
        }

        return dp[ind];
    }
    int minCostClimbingStairs(vector<int> &cost)
    {
        int n = cost.size();
        return min(helper(cost, n - 1), helper(cost, n - 2));
    }
};