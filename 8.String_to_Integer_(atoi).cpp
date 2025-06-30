class Solution
{
public:
    int myAtoi(string s)
    {
        if (s.length() == 0)
            return 0;

        long res = 0;
        bool isNegative = false;
        int i = 0;

        while (i < s.size() && s[i] == ' ')
            i++;

        if (s[i] == '-')
        {
            isNegative = true;
            i++;
        }
        else if (s[i] == '+')
        {
            i++;
        }

        while (i < s.length())
        {
            char ch = s[i];
            if (ch < '0' || ch > '9')
                break;

            res = res * 10 + (ch - '0');

            if (isNegative && -1 * res <= INT_MIN)
                return INT_MIN;
            if (res > INT_MAX)
                return INT_MAX;

            i++;
        }

        return isNegative ? -1 * res : (res);
    }
};