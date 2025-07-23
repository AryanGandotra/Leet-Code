class Solution
{
public:
    bool lemonadeChange(vector<int> &bills)
    {
        int numberOf5Bills = 0, numberOf10Bills = 0, numberOf20Bills = 0;

        for (int i = 0; i < bills.size(); i++)
        {
            if (bills[i] == 5)
            {
                numberOf5Bills++;
            }
            else if (bills[i] == 10)
            {
                if (numberOf5Bills == 0)
                    return false;
                numberOf10Bills++;
                numberOf5Bills--;
            }
            else
            {

                if (numberOf10Bills > 0 && numberOf5Bills > 0)
                {
                    numberOf10Bills--;
                    numberOf5Bills--;
                }
                else if (numberOf5Bills >= 3)
                {
                    numberOf5Bills -= 3;
                }
                else
                {
                    return false;
                }
                numberOf20Bills++;
            }
        }

        return true;
    }
};