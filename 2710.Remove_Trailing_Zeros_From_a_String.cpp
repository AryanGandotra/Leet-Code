class Solution
{
public:
    string removeTrailingZeros(string num)
    {
        bool flag = false;
        int i;
        for (i = num.length() - 1; i > 0; i--)
            if (num[i] > '0')
            {
                break;
            }

        return num.substr(0, i + 1);
    }
};