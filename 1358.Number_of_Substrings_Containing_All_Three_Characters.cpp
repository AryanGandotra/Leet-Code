class Solution
{
public:
    int numberOfSubstrings(string s)
    {
        int i = 0;
        int ans = 0;
        int aIndex = -1, bIndex = -1, cIndex = -1;

        while (i < s.length())
        {
            if (s[i] == 'a')
                aIndex = i;
            else if (s[i] == 'b')
                bIndex = i;
            else
                cIndex = i;

            ans += min(aIndex, min(bIndex, cIndex)) + 1;
            i++;
        }

        return ans;
    }
};