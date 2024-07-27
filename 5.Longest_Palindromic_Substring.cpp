class Solution
{
public:
    string longestPalindrome(string s)
    {
        int n = s.length();
        if (n == 0)
            return "";

        // Arrays to store current and previous row
        vector<int> prev(n + 1, 0);
        vector<int> curr(n + 1, 0);

        int start = 0;     // start index of the longest palindromic substring
        int maxLength = 1; // length of the longest palindromic substring

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (s[i - 1] == s[n - j])
                {
                    curr[j] = prev[j - 1] + 1;
                    if (curr[j] > maxLength && isPalindrome(s, i - curr[j], i - 1))
                    {
                        maxLength = curr[j];
                        start = i - curr[j];
                    }
                }
                else
                {
                    curr[j] = 0;
                }
            }
            // Swap current and previous row
            swap(prev, curr);
        }

        return s.substr(start, maxLength);
    }

    bool isPalindrome(string &s, int left, int right)
    {
        while (left < right)
        {
            if (s[left] != s[right])
                return false;
            left++;
            right--;
        }
        return true;
    }
};