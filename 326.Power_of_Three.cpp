class Solution
{
public:
    bool isPowerOfThree(int n)
    {
        for (int i = 0; i < n; i++)
        {
            if (pow(3, i) > n)
            {
                break;
            }
            if (pow(3, i) == n)
            {
                return true;
            }
        }
        return false;
    }
};