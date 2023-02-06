class Solution
{
public:
    int divide(int dividend, int divisor)
    {
        long quotient;
        if (dividend > 0 && divisor > 0)
        {
            quotient = dividend / divisor;
        }
        else if (dividend < 0 && divisor > 0)
        {
            quotient = fabs(dividend) / divisor;
            quotient = quotient * (-1);
        }
        else if (dividend > 0 && divisor < 0)
        {
            quotient = dividend / fabs(divisor);
            quotient = quotient * (-1);
        }
        else
        {
            quotient = fabs(dividend) / fabs(divisor);
        }
        if (quotient > pow(2, 31) - 1)
        {
            return pow(2, 31) - 1;
        }
        else if (quotient < pow(-2, 31))
        {
            return pow(-2, 31);
        }
        else
        {
            return quotient;
        }
    }
};