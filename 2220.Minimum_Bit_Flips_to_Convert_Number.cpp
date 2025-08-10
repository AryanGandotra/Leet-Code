class Solution
{
public:
    string getBinary(int n)
    {
        if (n == 0)
            return "0";

        string ans = "";
        while (n > 0)
        {
            ans = char((n % 2) + '0') + ans;
            n /= 2;
        }
        return ans;
    }
    int minBitFlips(int start, int goal)
    {
        int x = start ^ goal;
        string x_bits = getBinary(x);
        int ans = 0;

        for (int i = 0; i < x_bits.length(); i++)
            if (x_bits[i] == '1')
                ans++;

        return ans;
    }
};