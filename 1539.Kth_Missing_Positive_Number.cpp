class Solution
{
public:
    int findKthPositive(vector<int> &arr, int k)
    {
        int low = 0, high = arr.size() - 1;
        int mid = low + (high - low) / 2;

        while (low <= high)
        {
            int missing = arr[mid] - (mid + 1);
            if (missing < k)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
            mid = low + (high - low) / 2;
        }

        return low + k;
    }
};