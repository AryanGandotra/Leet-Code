class Solution
{
public:
    bool isPerfectSquare(int num)
    {
        bool result = false;
        for (long int i = 0; i <= num; i++)
        {
            if (i * i > num && result == false)
            {
                return false;
            }
            if (i * i == num)
            {
                result = true;
                break;
            }
        }

        return result;
    }
};