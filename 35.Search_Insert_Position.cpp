class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low,mid,high;
        low=0;
        int found=0;
        high=nums.size()-1;
        while(low<=high && nums[low]<=target){
            mid=(low+high)/2;
            if(nums[mid]==target){
                return mid;           
                }
            else if(target>nums[mid]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        if(target<=nums[0]){
            return 0;
        }
        return mid+1;
        
    }
};