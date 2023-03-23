class Solution
{
public:
    vector<long long> sumOfThree(long long num)
    {
        vector<long long> result;
        long long x;
        x = (num - 3) / 3;
        if (x + (x + 1) + (x + 2) == num)
        {
            result.push_back(x);
            result.push_back(x + 1);
            result.push_back(x + 2);
            return result;
        }
        return result;
    }
};