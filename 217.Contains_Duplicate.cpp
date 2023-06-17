// Approach 4 using hashmaps

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_map<int, int> map1;

        for (auto i : nums)
        {
            map1[i]++;
        }

        for (auto i : map1)
        {
            if (i.second > 1)
                return true;
        }

        return false;
    }
};

// Approach 3 using maps

// class Solution {
// public:

//     bool containsDuplicate(vector<int>& nums) {
//         map<int,int> map1;

//         for(auto i : nums){
//             map1[i]++;
//         }

//         for(auto i : map1){
//             if(i.second > 1)
//                 return true;
//         }

//         return false;
//     }
// };

// class Solution {
// public:

//     bool containsDuplicate(vector<int>& nums) {
//         set <int> set1;

//         for(int i=0;i<nums.size();i++){
//             if(set1.find(nums[i]) != set1.end())
//                 return true;

//             // Method - 2 (of set) - if the size of setis less than the vector that there
//             // must be some repeating element. so do things accordingly
//             // set1.insert(nums[i]);
//         }

//         if(set1.size()!=nums.size())
//             return true;

//         return false;
//     }
// };

// class Solution {
// public:

//     bool containsDuplicate(vector<int>& nums) {
//         if(nums.size()==0){
//             return false;
//         }
//         int repeat=false;
//         unordered_map<int, int> map;
//         for (int i = 0; i < nums.size(); i++)
//         {
//             unordered_map<int, int>::iterator it = map.find(nums[i]);
//             if (it != map.end())
//             {
//                 it->second++;
//             }
//             else
//             {
//                 map.insert({nums[i], 1});
//             }
//         }
//         for (auto it=map.begin(); it!=map.end(); it++)
//         {
//             if (it->second >1)
//             {
//                 repeat=true;
//                 break;
//             }
//         }
//         return repeat;
//     }
// };
