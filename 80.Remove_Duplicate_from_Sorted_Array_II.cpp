// class Solution
// {
// public:
//     int removeDuplicates(vector<int> &nums)
//     {
//         int left = 0, right = 0;

//         while (right < nums.size())
//         {
//             int count = 1;

//             while (right + 1 < nums.size() && nums[right] == nums[right + 1])
//             {
//                 right++;
//                 count++;
//             }

//             for (int i = 0; i < min(2, count); i++)
//             {
//                 nums[left] = nums[right];
//                 left++;
//             }
//             right++;
//         }

//         return left;
//     }
// };

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int n = nums.size();
        if (n < 3)
            return n;

        int indx = 2;
        for (int i = 2; i < nums.size(); i++)
        {
            if (nums[i] != nums[indx - 2])
            {
                nums[indx] = nums[i];
                indx++;
            }
        }
        return indx;
    }
};