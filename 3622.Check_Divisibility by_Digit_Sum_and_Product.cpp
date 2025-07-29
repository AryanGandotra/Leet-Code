class Solution
{
public:
    long long getDigitSum(int n)
    {
        long long ans = 0;
        while (n > 0)
        {
            ans += n % 10;
            n /= 10;
        }

        return ans;
    }

    long long getDigitProduct(int n)
    {
        long long ans = 1;
        while (n > 0)
        {
            ans *= n % 10;
            n /= 10;
        }

        return ans;
    }

    bool checkDivisibility(int n)
    {
        long long digitSum = getDigitSum(n);
        long long digitProduct = getDigitProduct(n);

        return n % (digitSum + digitProduct) == 0 ? true : false;
    }
};