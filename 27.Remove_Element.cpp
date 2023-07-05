class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int n = nums.size();
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] != val)
            {
                swap(nums[i], nums[count]);
                count++;
            }
        }

        return count;
    }
};

// class Solution {
// public:
//     int removeElement(vector<int>& nums, int val) {
//         vector<int> result;
//         if(nums.size()==0){
//             return 0;
//         }
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]!=val){
//                 result.push_back(nums[i]);
//             }
//         }
//         nums=result;
//         return nums.size();
//     }
// };