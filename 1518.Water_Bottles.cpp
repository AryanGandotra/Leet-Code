class Solution
{
public:
    int numWaterBottles(int numBottles, int numExchange)
    {
        int total = 0;
        int currEmpty = 0;
        int buffer = 0;
        while (numBottles > 0)
        {
            // Drink all filled bottles
            total += numBottles;
            // count current empty bottles
            currEmpty = numBottles + buffer;
            buffer = currEmpty % numExchange;
            // get how many filled bottles can be acheived
            numBottles = currEmpty / numExchange;
        }

        return total;
    }
};