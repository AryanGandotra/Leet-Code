#include <iostream>
#include <vector>
using namespace std;
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
int main()
{

    Solution s1;

    vector<int> nums;

    nums.push_back(1);
    nums.push_back(3);
    nums.push_back(5);
    nums.push_back(6);

    cout << s1.searchInsert(nums, 2)<<endl;
}