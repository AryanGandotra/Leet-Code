class Solution
{
public:
    int dp[1001][1001];

    int lcs(string S1, string S2, int m, int n)
    {
        for (int i = 0; i <= m; i++)
        {
            dp[i][0] = 0;
        }

        for (int j = 0; j <= n; j++)
        {
            dp[0][j] = 0;
        }

        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (S1[i - 1] == S2[j - 1])
                {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                }
                else
                {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }

        return dp[m][n];
    }

    string reverseString(string s)
    {
        string reverseStr = "";

        for (int i = s.length() - 1; i >= 0; i--)
        {
            reverseStr += s[i];
        }

        return reverseStr;
    }

    int getLongestPalindromicSubsequence(string s, int m)
    {
        return lcs(s, reverseString(s), m, m);
    }
    int longestPalindromeSubseq(string s)
    {
        int m = s.length();
        return lcs(s, reverseString(s), m, m);
    }
};