class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int left = 1;

        for (int right = 1; right < nums.size(); right++)
        {
            if (nums[right] != nums[right - 1])
            {
                nums[left] = nums[right];
                left++;
            }
        }

        return left;
    }
};

// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         vector<int> result;
//         if(nums.size()==1){
//             return 1;
//         }
//         for(int i=0;i<nums.size();i++){
//             if(!(find(result.begin(), result.end(), nums[i]) != result.end())){
//                 result.push_back(nums[i]);
//             }
//     }
//         nums=result;
//         return nums.size();
//     }
// };
