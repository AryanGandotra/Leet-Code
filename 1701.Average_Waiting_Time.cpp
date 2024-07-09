class Solution
{
public:
    double averageWaitingTime(vector<vector<int>> &customers)
    {
        double totalWaitingTime = 0;
        double currentTime = 0;

        for (int i = 0; i < customers.size(); i++)
        {
            if (currentTime < customers[i][0])
            {
                currentTime = customers[i][0];
            }

            totalWaitingTime += currentTime + customers[i][1] - customers[i][0];
            currentTime += customers[i][1];
        }

        return totalWaitingTime / customers.size();
    }
};