class Solution
{
public:
    int dp[2001][2001];

    void initialiseDp()
    {
        for (int i = 0; i < 2001; i++)
        {
            for (int j = 0; j < 2001; j++)
            {
                dp[i][j] = -1;
            }
        }
    }

    bool isPalindrome(string s, int i, int j)
    {
        while (i < j)
        {
            if (s[i] != s[j])
            {
                return false;
            }
            i++;
            j--;
        }

        return true;
    }

    int minCuts(string s, int i, int j)
    {

        if (i >= j || isPalindrome(s, i, j))
            return 0;

        if (dp[i][j] != -1)
            return dp[i][j];

        int ans = INT_MAX;

        for (int k = i; k < j; k++)
        {
            int left, right;
            if (dp[i][k] != -1)
            {
                left = dp[i][k];
            }
            else
            {
                left = minCuts(s, i, k);
            }

            if (dp[k + 1][j] != -1)
            {
                right = dp[k + 1][j];
            }
            else
            {
                right = minCuts(s, k + 1, j);
            }

            int temp = left + right + 1;
            ans = min(ans, temp);
        }

        return dp[i][j] = ans;
    }
    int minCut(string s)
    {
        initialiseDp();
        return minCuts(s, 0, s.length() - 1);
    }
};