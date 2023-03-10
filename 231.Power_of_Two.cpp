class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        for (int i = 0; i < n; i++)
        {
            if (pow(2, i) > n)
            {
                break;
            }
            if (pow(2, i) == n)
            {
                return true;
            }
        }
        return false;
    }
};