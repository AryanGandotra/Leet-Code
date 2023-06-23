class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        int i = 0;
        int j = numbers.size() - 1;
        while (i < j)
        {

            if (numbers[i] + numbers[j] == target)
            {
                return vector{i + 1, j + 1};
            }
            else if (numbers[i] + numbers[j] < target)
            {
                i++;
            }
            else if (numbers[i] + numbers[j] > target)
            {
                j--;
            }
        }
        return {};
    }
};

// class Solution
// {
// public:
//     vector<int> twoSum(vector<int> &numbers, int target)
//     {
//         int i = 0;
//         int j = numbers.size() - 1;
//         while (i < j)
//         {
//             int sum = numbers[i] + numbers[j];
//             if (sum < target)
//             {
//                 i++;
//             }
//             else if (sum > target)
//             {
//                 j--;
//             }
//             else
//             {
//                 return vector{i + 1, j + 1};
//             }
//         }
//         return vector{-1, -1};
//     }
// };