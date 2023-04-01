class Solution
{
public:
    unsigned int countSetBits(unsigned int n)
    {
        unsigned int count = 0;
        while (n)
        {
            count += n & 1;
            n >>= 1;
        }
        return count;
    }
    vector<int> countBits(int n)
    {
        vector<int> result;
        for (int i = 0; i <= n; i++)
        {
            result.push_back(0);
        }
        for (int i = 0; i <= n; i++)
        {
            result[i] = countSetBits(i);
        }

        return result;
    }
};