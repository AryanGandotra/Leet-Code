class Solution
{
public:
    const long long MOD = 1e9 + 7;

    long long myPow(long long x, long long n)
    {
        if (n == 0)
            return 1;
        if (x == 0)
            return 0;

        long long res = myPow(x, n / 2);
        res = (res * res) % MOD;

        if (n % 2)
        {
            res = (res * x) % MOD;
        }

        return res;
    }

    int countGoodNumbers(long long n)
    {

        long long evenPlaces = (n + 1) / 2;
        long long oddPlaces = n / 2;

        long long evenPow = myPow(5, evenPlaces);
        long long oddPow = myPow(4, oddPlaces);

        return (evenPow * oddPow) % MOD;
    }
};