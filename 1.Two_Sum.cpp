// optimised approach using unordered maps

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> map1;

        for (int i = 0; i < nums.size(); i++)
        {
            // check if target - nums[i] element is present in the map if yes return the indices else push the element along with its index in the map
            if (map1.find(target - nums[i]) == map1.end())
                map1[nums[i]] = i;

            else
            {
                return {map1[target - nums[i]], i};
            }
        }

        return {};
    }
};

// brute force approach

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//     int vecSize = nums.size();
//     for(int i = 0; i < vecSize; i++){
//         for(int j = i+1; j < vecSize; j++){
//             if(nums[i]+nums[j]==target){
//                 return {i,j};
//             }
//         }
//     }
//     return {};
//     }
// };