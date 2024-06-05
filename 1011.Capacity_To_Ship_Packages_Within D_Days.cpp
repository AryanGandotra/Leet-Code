class Solution
{
public:
    int getMax(vector<int> weights)
    {
        int ans = INT_MIN;

        for (int i = 0; i < weights.size(); i++)
        {
            ans = max(ans, weights[i]);
        }

        return ans;
    }

    int getSum(vector<int> weights)
    {
        int ans = 0;

        for (int i = 0; i < weights.size(); i++)
        {
            ans += weights[i];
        }
        return ans;
    }

    int getDays(vector<int> weights, int mid)
    {
        int days = 1;
        int load = 0;
        int n = weights.size();
        for (int i = 0; i < n; i++)
        {
            if (load + weights[i] > mid)
            {
                days += 1;
                load = weights[i];
            }
            else
            {
                load += weights[i];
            }
        }
        return days;
    }
    int shipWithinDays(vector<int> &weights, int d)
    {
        int low = getMax(weights), high = getSum(weights);
        int mid = low + (high - low) / 2;
        int ans = -1;

        while (low <= high)
        {
            int CurrDays = getDays(weights, mid);
            if (CurrDays <= d)
            {
                ans = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
            mid = low + (high - low) / 2;
        }

        return mid;
    }
};