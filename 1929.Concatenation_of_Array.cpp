class Solution
{
public:
    vector<int> getConcatenation(vector<int> &nums)
    {
        vector<int> ans;
        int len;
        len = nums.size();
        for (int i = 0; i < 2 * len; i++)
        {
            ans.push_back(nums[i % len]);
        }
        return ans;
    }
};

// class Solution {
// public:
//     vector<int> getConcatenation(vector<int>& nums) {
//         int size=nums.size();
//         for(int i=0;i<size;i++){
//             nums.push_back(nums[i]);
//         }
//         return nums;
//     }
// };