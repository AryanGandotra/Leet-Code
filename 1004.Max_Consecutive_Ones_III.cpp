class Solution
{
public:
    int longestOnes(vector<int> &nums, int k)
    {
        int i = 0, j = 0;
        int maxLength = 0;
        int zeroCount = 0;

        while (j < nums.size())
        {
            if (nums[j] == 0)
            {
                zeroCount++;
            }

            if (zeroCount > k)
            {
                if (nums[i] == 0)
                    zeroCount--;
                i++;
            }

            if (zeroCount <= k)
            {
                maxLength = max(maxLength, j - i + 1);
            }

            j++;
        }

        return maxLength;
    }
};

// class Solution
// {
// public:
//     int longestOnes(vector<int> &nums, int k)
//     {
//         int i = 0, j = 0;
//         int maxLength = 0;
//         int zeroCount = 0;

//         while (j < nums.size())
//         {
//             if (nums[j] == 0)
//             {
//                 zeroCount++;
//             }

//             while (zeroCount > k)
//             {
//                 if (nums[i] == 0)
//                     zeroCount--;
//                 i++;
//             }

//             maxLength = max(maxLength, j - i + 1);
//             j++;
//         }

//         return maxLength;
//     }
// };