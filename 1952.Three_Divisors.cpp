class Solution
{
public:
    vector<int> divisor(int n)
    {
        vector<int> divisors;
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                divisors.push_back(i);
            }
        }
        return divisors;
    }

    bool isThree(int n)
    {
        vector<int> divisors;
        bool result = false;
        divisors = divisor(n);

        if (divisors.size() == 3)
        {
            result = true;
        }

        return result;
    }
};