class Solution
{
public:
    int getSumOfDigits(int x)
    {
        int sumOfDigits = 0;

        while (x > 0)
        {
            sumOfDigits += x % 10;
            x = x / 10;
        }

        return sumOfDigits;
    }
    int sumOfTheDigitsOfHarshadNumber(int x)
    {
        int sumOfDigits = getSumOfDigits(x);

        return x % sumOfDigits == 0 ? sumOfDigits : -1;
    }
};