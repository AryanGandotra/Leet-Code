class Solution
{
public:
    int maximumWealth(vector<vector<int>> &accounts)
    {
        vector<int> result;
        int max = 0;

        for (int i = 0; i < accounts.size(); i++)
        {
            int sum = 0;
            for (int j = 0; j < accounts[i].size(); j++)
            {
                sum += accounts[i][j];
            }
            result.push_back(sum);
        }

        for (int i = 0; i < result.size(); i++)
        {
            if (max < result[i])
            {
                max = result[i];
            }
        }

        return max;
    }
};