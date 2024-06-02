class Solution
{
private:
    int getFirstOcc(vector<int> &arr, int x)
    {
        int low = 0, high = arr.size() - 1;
        int mid = low + (high - low) / 2;
        int ans = -1;

        while (low <= high)
        {
            if (arr[mid] == x)
            {
                ans = mid;
                high = mid - 1;
            }
            else if (arr[mid] < x)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }

            mid = low + (high - low) / 2;
        }

        return ans;
    }
    int getLastOcc(vector<int> &arr, int x)
    {
        int low = 0, high = arr.size() - 1;
        int mid = low + (high - low) / 2;
        int ans = -1;

        while (low <= high)
        {
            if (arr[mid] == x)
            {
                ans = mid;
                low = mid + 1;
            }
            else if (arr[mid] < x)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }

            mid = low + (high - low) / 2;
        }

        return ans;
    }

public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int firstOcc = getFirstOcc(nums, target);
        int lastOcc = getLastOcc(nums, target);

        return {firstOcc, lastOcc};
    }
};

// class Solution
// {
// public:
//     vector<int> searchRange(vector<int> &nums, int target)
//     {
//         vector<int> result;
//         result.push_back(-1);
//         result.push_back(-1);
//         int count = 1;
//         for (int i = 0; i < nums.size(); i++)
//         {
//             if (nums[i] == target)
//             {
//                 if (count == 1)
//                 {
//                     result[0] = i;
//                     count++;
//                 }
//                 result[1] = i;
//             }
//         }
//         return result;
//     }
// };