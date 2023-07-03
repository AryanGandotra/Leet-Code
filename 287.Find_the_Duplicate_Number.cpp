class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {

        int tortoise = nums[0];
        int hare = nums[0];

        do
        {
            tortoise = nums[tortoise];
            hare = nums[nums[hare]];
        } while (tortoise != hare);

        tortoise = nums[0];
        while (tortoise != hare)
        {
            tortoise = nums[tortoise];
            hare = nums[hare];
        }

        return hare;
    }
};

// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         set<int> numbers;
//         int ans;

//         for(int i=0;i<nums.size();i++){
//             if(numbers.find(nums[i])==numbers.end())
//                 numbers.insert(nums[i]);
//             else{
//                 ans = nums[i];
//                 break;
//             }
//         }
//         return ans;
//     }
// };

// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         int size=nums.size();
//         int result;
//         int arr[size];
//         for(int i=1;i<size;i++){
//             arr[i]=0;
//         }

//         for(int i=0;i<nums.size();i++){
//             arr[nums[i]]++;
//         }

//         for(int i=1;i<size;i++){
//             if(arr[i]>1){
//                 result=i;
//             }
//         }

//         return result;
//     }
// };
