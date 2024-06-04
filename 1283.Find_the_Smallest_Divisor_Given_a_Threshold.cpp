class Solution
{
public:
    int getMax(vector<int> arr)
    {
        int ans = INT_MIN;

        for (int i = 0; i < arr.size(); i++)
        {
            ans = max(ans, arr[i]);
        }

        return ans;
    }

    int getSum(vector<int> arr, int mid)
    {
        int sum = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            sum += ceil((double)(arr[i]) / (double)(mid));
        }

        return sum;
    }

    int smallestDivisor(vector<int> &arr, int limit)
    {
        if (arr.size() > limit)
            return -1;
        int low = 1, high = getMax(arr);
        int mid = low + (high - low) / 2;
        int ans = -1;

        while (low <= high)
        {
            int CurrSum = getSum(arr, mid);

            if (CurrSum <= limit)
            {
                ans = mid;
                high = mid - 1;
            }
            else
                low = mid + 1;

            mid = low + (high - low) / 2;
        }

        return ans;
    }
};