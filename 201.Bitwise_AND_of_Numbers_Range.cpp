class Solution
{
public:
    int rangeBitwiseAnd(int left, int right)
    {
        if (left == right)
        {
            return left;
        }
        long int a = left;
        for (long int i = left; i <= right; i++)
        {
            a = a & i;
            if (a == 0)
            {
                return 0;
            }
        }

        return a;
    }
};