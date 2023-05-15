class Solution
{
public:
    int hammingWeight(uint32_t n)
    {
        int numberOfOnes = 0;
        while (n > 0)
        {
            int rem;
            rem = n % 2;
            if (rem == 1)
            {
                numberOfOnes += 1;
            }
            n = n / 2;
        }
        return numberOfOnes;
    }
};