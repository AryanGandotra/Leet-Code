class Solution
{
public:
    int reverseNum(int num)
    {
        int ans = 0;

        while (num > 0)
        {
            ans = ans * 10 + num % 10;
            num /= 10;
        }
        return ans;
    }

    bool isSameAfterReversals(int num)
    {
        if (reverseNum(reverseNum(num)) == num)
            return true;
        return false;
    }
};