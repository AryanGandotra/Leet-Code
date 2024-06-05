class Solution
{
public:
    int getPartitions(vector<int> arr, int mid)
    {
        long long sum = 0;
        int partitions = 1;
        for (int i = 0; i < arr.size(); i++)
        {
            if (sum + arr[i] <= mid)
                sum += arr[i];
            else
            {
                partitions++;
                sum = arr[i];
            }
        }

        return partitions;
    }

    int splitArray(vector<int> &arr, int k)
    {
        int low = *max_element(arr.begin(), arr.end());
        int high = accumulate(arr.begin(), arr.end(), 0);

        int mid = low + (high - low) / 2;

        while (low <= high)
        {
            int partitions = getPartitions(arr, mid);

            if (partitions > k)
                low = mid + 1;
            else
            {
                high = mid - 1;
            }
            mid = low + (high - low) / 2;
        }

        return low;
    }
};