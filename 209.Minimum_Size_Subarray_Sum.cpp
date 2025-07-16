class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &nums)
    {
        int currSum = 0;
        int minLength = INT_MAX;
        int i = 0, j = 0;

        while (j < nums.size())
        {
            currSum += nums[j];

            while (currSum >= target)
            {
                minLength = min(j - i + 1, minLength);
                currSum -= nums[i];
                i++;
            }

            j++;
        }

        return minLength == INT_MAX ? 0 : minLength;
    }
};

// brute force - will face TLE in leetcode

// class Solution
// {
// public:
//     int minSubArrayLen(int target, vector<int> &nums)
//     {
//         int minLength = INT_MAX;
//         int n = nums.size();

//         for (int i = 0; i < n; i++)
//         {
//             int currSum = 0;
//             for (int j = i; j < n; j++)
//             {
//                 currSum += nums[j];
//                 if (currSum >= target)
//                 {
//                     minLength = min(minLength, j - i + 1);
//                     break;
//                 }
//             }
//         }

//         return minLength == INT_MAX ? 0 : minLength;
//     }
// };