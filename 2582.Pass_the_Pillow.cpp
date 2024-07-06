class Solution
{
public:
    int passThePillow(int n, int time)
    {
        if (time < n)
            return time + 1;
        else if (time == n)
            return n - 1;

        int rounds = time / (n - 1);

        if (rounds % 2 == 0)
        {
            int movesLeft = time - (n - 1) * rounds;
            return movesLeft + 1;
        }

        int timeLeft = time - (n - 1) * rounds;
        return n - timeLeft;
    }
};