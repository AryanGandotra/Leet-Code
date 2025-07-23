class Solution
{
public:
    pair<int, int> getSumOfDigits(string num)
    {
        int sumOfEvenDigits = 0, sumOfOddDigits = 0;

        for (int i = 0; i < num.length(); i++)
        {
            if (i % 2 == 0)
            {
                sumOfEvenDigits += num[i] - '0';
            }
            else
            {
                sumOfOddDigits += num[i] - '0';
            }
        }

        return {sumOfEvenDigits, sumOfOddDigits};
    }
    bool isBalanced(string num)
    {
        pair<int, int> sum = getSumOfDigits(num);
        int sumOfEvenDigits = sum.first;
        int sumOfOddDigits = sum.second;

        return sumOfEvenDigits == sumOfOddDigits ? true : false;
    }
};