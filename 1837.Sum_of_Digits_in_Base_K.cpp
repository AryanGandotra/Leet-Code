class Solution
{
public:
    int decToBaseK(int n, int k)
    {
        vector<int> result;
        int sum = 0;

        int i = 0;
        while (n > 0)
        {
            result.push_back(n % k);
            n = n / k;
            i++;
        }

        for (int j = 0; j < result.size(); j++)
            sum += result[j];
        return sum;
    }

    int sumBase(int n, int k)
    {
        return decToBaseK(n, k);
    }
};