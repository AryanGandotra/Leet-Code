class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int element = nums[0], count = 1;

        for (int i = 1; i < nums.size(); i++)
        {
            if (count == 0)
            {
                element = nums[i];
            }
            if (nums[i] != element)
                count--;
            else
                count++;
        }

        return element;
    }
};

// class Solution
// {
// public:
//     int majorityElement(vector<int> &nums)
//     {
//         unordered_map<int, int> freq;
//         int n = nums.size();

//         for (int i = 0; i < nums.size(); i++)
//         {
//             freq[nums[i]]++;
//             if (freq[nums[i]] > n / 2)
//                 return nums[i];
//         }

//         return -1;
//     }
// };