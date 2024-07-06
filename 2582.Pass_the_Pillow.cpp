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
        int movesLeft = time - (n - 1) * rounds;

        if (rounds % 2 == 0)
        {
            return movesLeft + 1;
        }
        return n - movesLeft;
    }
};

// class Solution
// {
// public:
//     int passThePillow(int n, int time)
//     {
//         bool changeDirection = false;

//         int ans = 1;

//         for (int i = 0; i < time; i++)
//         {
//             if (i % (n - 1) == 0 && i != 0)
//                 changeDirection = !changeDirection;

//             if (changeDirection == false)
//                 ans++;
//             else
//                 ans--;
//         }

//         return ans;
//     }
// };