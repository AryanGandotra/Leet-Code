class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int currLength = 0, maxLength = 0;
        map<char, int> mp;
        int i = 0, j = 0;

        while (j < s.length())
        {
            if (mp.find(s[j]) != mp.end())
            {
                i = max(i, mp[s[j]] + 1);
            }

            mp[s[j]] = j;
            currLength = j - i + 1;
            maxLength = max(maxLength, currLength);
            j++;
        }

        return maxLength;
    }
};