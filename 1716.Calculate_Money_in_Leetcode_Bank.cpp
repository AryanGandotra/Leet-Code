class Solution
{
public:
    int totalMoney(int n)
    {
        int moneyOnmonday = 1;
        int prevMoney = moneyOnmonday;
        int currMoney = 0;
        int days = 1;

        while (n > 0)
        {
            if (days % 7 == 0)
            {
                moneyOnmonday++;
            }
            currMoney += prevMoney;
            prevMoney = moneyOnmonday + days % 7;
            days++;
            n--;
        }

        return currMoney;
    }
};