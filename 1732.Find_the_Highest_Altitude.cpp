class Solution
{
public:
    int largestAltitude(vector<int> &gain)
    {
        vector<int> result;
        for (int i = 0; i <= gain.size(); i++)
        {
            result.push_back(0);
        }

        result[0] = 0;
        result[1] = result[0] + gain[0];

        for (int i = 2; i < result.size(); i++)
        {
            result[i] = result[i - 1] + gain[i - 1];
        }

        int max = INT_MIN;

        for (int i = 0; i < result.size(); i++)
        {
            if (max < result[i])
                max = result[i];
        }

        return max;
    }
};