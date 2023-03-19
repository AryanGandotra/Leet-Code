class Solution
{
public:
    int reverse(int x)
    {
        long int rev_num = 0;
        while (x != 0)
        {
            rev_num = (rev_num * 10) + (x % 10);
            x /= 10;
        }
        if (rev_num > (pow(2, 31) - 1))
        {
            return 0;
        }
        else if (rev_num < (pow(-2, 31)))
        {
            return 0;
        }
        return rev_num;
    }
};