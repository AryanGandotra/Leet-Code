class Solution
{
public:
    int alternateDigitSum(int n)
    {
        vector<int> digits;
        while (n > 0)
        {
            int rem = n % 10;
            digits.push_back(rem);
            n = n / 10;
        }

        int sum = 0;

        reverse(digits.begin(), digits.end());

        for (int i = 0; i < digits.size(); i++)
        {
            if (i % 2 == 0)
            {
                sum += digits[i];
            }
            else
            {
                sum -= digits[i];
            }
        }
        return sum;
    }
};