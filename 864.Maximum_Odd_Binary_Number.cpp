class Solution
{
public:
    string maximumOddBinaryNumber(string s)
    {
        int n = s.length();
        int oneCount = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                oneCount++;
        }

        string ans;

        if (oneCount == 1)
        {
            for (int i = 0; i < n - 1; i++)
            {
                ans += '0';
            }

            ans += '1';
            return ans;
        }

        for (int i = oneCount; i < n; i++)
        {
            ans += '0';
        }

        ans += '1';
        oneCount--;

        while (oneCount > 0)
        {
            ans.insert(ans.begin(), '1');
            oneCount--;
        }

        return ans;
    }
};