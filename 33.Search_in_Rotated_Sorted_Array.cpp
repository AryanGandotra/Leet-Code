class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int low = 0;
        int high = nums.size() - 1;

        int mid = low + (high - low) / 2;

        while (low < high)
        {
            if (nums[mid] == target)
                return mid;
            if (nums[low] <= nums[mid])
            {
                if (target > nums[mid] || target < nums[low])
                    low = mid + 1;
                else
                {
                    high = mid - 1;
                }
            }
            else
            {
                if (target < nums[mid] || target > nums[high])
                {
                    high = mid - 1;
                }
                else
                {
                    low = mid + 1;
                }
            }

            mid = low + (high - low) / 2;
        }

        if (nums[mid] == target)
        {
            return mid;
        }

        return -1;
    }
};