class Solution
{
public:
    vector<int> divisor;
    void divisors(int num)
    {
        divisor.push_back(1);
        for (int i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                divisor.push_back(i);
            }
        }
    }
    bool checkPerfectNumber(int num)
    {
        bool result = false;
        if (num == 1)
        {
            result = false;
        }
        else
        {
            divisors(num);

            int sum = 0;
            for (int i = 0; i < divisor.size(); i++)
            {
                sum = sum + divisor[i];
            }
            if (sum == num)
            {
                result = true;
            }
        }
        return result;
    }
};