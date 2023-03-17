class Solution
{
public:
    int subtractProductAndSum(int n)
    {
        vector<int> digits;
        int sum = 0;
        int mul = 1;

        while (n > 0)
        {
            int rem = n % 10;
            digits.push_back(rem);
            n = n / 10;
        }

        for (int i = 0; i < digits.size(); i++)
        {
            sum += digits[i];
            mul = mul * digits[i];
        }

        return mul - sum;
    }
};