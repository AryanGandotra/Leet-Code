class Solution
{
public:
    int getMax(vector<int> arr)
    {
        int maxDay = INT_MIN;

        for (int i = 0; i < arr.size(); i++)
        {
            maxDay = max(maxDay, arr[i]);
        }

        return maxDay;
    }

    int getMin(vector<int> arr)
    {
        int minDay = INT_MAX;

        for (int i = 0; i < arr.size(); i++)
        {
            minDay = min(minDay, arr[i]);
        }

        return minDay;
    }

    int getBuq(vector<int> arr, int mid, int k)
    {
        int count = 0;
        int buq = 0;

        for (int i = 0; i < arr.size(); i++)
        {

            if (arr[i] <= mid)
                count++;
            else
            {
                buq += count / k;
                count = 0;
            }
        }
        buq += count / k;
        return buq;
    }
    int minDays(vector<int> &arr, int m, int k)
    {
        long long flowers = m * 1ll * k * 1ll;
        if (arr.size() < flowers)
            return -1;

        int low = getMin(arr), high = getMax(arr);
        int mid = low + (high - low) / 2;
        int ans = -1;
        while (low <= high)
        {
            int buq = getBuq(arr, mid, k);

            if (buq == m)
                ans = mid;

            if (buq < m)
                low = mid + 1;
            else
                high = mid - 1;

            mid = low + (high - low) / 2;
        }
        return mid;
    }
};