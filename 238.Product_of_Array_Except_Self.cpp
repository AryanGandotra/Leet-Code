class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int n = nums.size();
        int prefix = 1;
        int postfix = 1;
        vector<int> result(n, 1);

        for (int i = 0; i < nums.size(); i++)
        {
            result[i] *= prefix;
            prefix *= nums[i];
        }

        for (int i = nums.size() - 1; i >= 0; i--)
        {
            result[i] *= postfix;
            postfix *= nums[i];
        }

        return result;
    }
};

// class Solution {
// public:

//     vector<int> productExceptSelf(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> prefix(n,0);
//         vector<int> postfix(n,0);
//         vector<int> result(n,0);

//         int i=0;
//         int j=i+1;

//         prefix[0]=nums[0];

//         while(i < nums.size()-1){
//             prefix[j]= prefix[i]*nums[j];
//             i++;
//             j++;
//         }

//         int l=nums.size()-1;
//         int m=l-1;

//         postfix[n-1]=nums[n-1];

//         while(l >= 1){
//             postfix[m]= postfix[l]*nums[m];
//             l--;
//             m--;
//         }

//         // cout<<"Prefix Array: ";
//         // for(int k=0;k<prefix.size();k++){
//         //     cout<<prefix[k]<<" ";
//         // }

//         // cout<<endl;

//         // cout<<"Postfix Array: ";
//         // for(int k=0;k<postfix.size();k++){
//         //     cout<<postfix[k]<<" ";
//         // }

//         for(int i=0;i<nums.size();i++){
//             if(i==0){
//                 result[i]=postfix[i+1];
//             }
//             else if(i==nums.size()-1){
//                 result[i]=prefix[i-1];
//             }
//             else{
//                 result[i]= prefix[i-1]*postfix[i+1];
//             }
//         }

//         return result;
//     }
// };

// brute force solution

// class Solution {
// public:

//     vector<int> productExceptSelf(vector<int>& nums) {
//         vector<int> result;
//         for(int i=0;i<nums.size();i++){
//             int mul=1;
//             for(int j=0;j<nums.size();j++){
//                 if(i!=j)
//                     mul*=nums[j];
//             }
//             result.push_back(mul);
//         }

//         return result;
//     }
// };

// class Solution {
// public:
//     bool zeroExists(vector<int>& nums){
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]==0){
//                 return true;
//             }
//         }
//         return false;
//     }
//     bool allZero(vector<int>& nums){
//     int count=0;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]==0){
//                 count++;
//             }
//         }
//         if(count==nums.size()){
//             return true;
//         }
//         return false;
//     }
//     int countZero(vector<int>& nums){
//         int count=0;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]==0){
//                 count++;
//             }
//         }
//         return count;
//     }
//     vector<int> productExceptSelf(vector<int>& nums) {
//         vector<int>result;
//         int countz=countZero(nums);
//         bool zero_there=zeroExists(nums);

//         for(int i=0;i<nums.size();i++){
//             result.push_back(0);
//         }

//         if(allZero(nums)){
//             return result;
//         }
//         if(countz>1){
//             return result;
//         }

//         int arr_product=1;
//         int arr_product_zero=1;
//         for(int i=0;i<nums.size();i++){
//             if(zero_there==false){
//                 arr_product*=nums[i];
//             }
//             else{
//                 if(nums[i]!=0){
//                     arr_product*=nums[i];
//                 }
//                 arr_product_zero*=nums[i];
//             }
//         }

//         for(int i=0;i<nums.size();i++){
//             if((nums[i]>0||nums[i]<0) && (zero_there==true)){
//                 result[i]=0;
//             }
//             else if((nums[i]>0||nums[i]<0) && (zero_there==false)){
//                 result[i]=arr_product/nums[i];
//             }
//             else{
//                 result[i]=arr_product;
//             }
//         }
//         return result;
//     }
// };
