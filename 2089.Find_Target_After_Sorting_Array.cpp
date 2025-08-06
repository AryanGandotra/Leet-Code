class Solution
{
public:
    vector<int> targetIndices(vector<int> &nums, int target)
    {
        vector<int> ans;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > target)
                break;
            if (nums[i] == target)
                ans.push_back(i);
        }

        return ans;
    }
};

// class Solution
// {
// public:
//     vector<int> targetIndices(vector<int> &nums, int target)
//     {
//         vector<int> ans;
//         sort(nums.begin(), nums.end());

//         int left = 0, right = nums.size() - 1;

//         int first = -1;
//         while (left <= right)
//         {
//             int mid = left + (right - left) / 2;
//             if (nums[mid] >= target)
//             {
//                 right = mid - 1;
//             }
//             else
//             {
//                 left = mid + 1;
//             }
//         }
//         first = left;

//         left = 0, right = nums.size() - 1;
//         int last = -1;
//         while (left <= right)
//         {
//             int mid = left + (right - left) / 2;
//             if (nums[mid] <= target)
//             {
//                 left = mid + 1;
//             }
//             else
//             {
//                 right = mid - 1;
//             }
//         }
//         last = right;

//         for (int i = first; i <= last; ++i)
//         {
//             if (i < nums.size() && nums[i] == target)
//             {
//                 ans.push_back(i);
//             }
//         }

//         return ans;
//     }
// };