class Solution
{
public:
    string generateOddString(int n)
    {
        string ans = "";

        for (int i = 0; i < n; i++)
        {
            ans += 'a';
        }

        return ans;
    }

    string generateEvenString(int n)
    {
        string ans = "";

        for (int i = 0; i < n - 1; i++)
        {
            ans += 'a';
        }

        return ans + 'b';
    }
    string generateTheString(int n)
    {

        if (n % 2 == 1)
        {
            return generateOddString(n);
        }

        return generateEvenString(n);
    }
};