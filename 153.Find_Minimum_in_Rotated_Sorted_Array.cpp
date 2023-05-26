class Solution
{
public:
    int pivot(vector<int> &arr, int n)
    {
        int low = 0, high = n - 1;
        int mid = low + (high - low) / 2;
        while (low < high)
        {
            if (arr[mid] >= arr[0])
            {
                low = mid + 1;
            }
            else
            {
                high = mid;
            }
            mid = low + (high - low) / 2;
        }
        if (arr[low] > arr[0])
        {
            return arr[0];
        }
        return arr[low];
    }
    int findMin(vector<int> &nums)
    {
        return pivot(nums, nums.size());
    }
};
