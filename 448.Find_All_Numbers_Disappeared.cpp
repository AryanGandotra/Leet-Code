class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> result;

        int size=nums.size();
        int *arr=new int[size+1];

        for(int i=1;i<size+1;i++){
            arr[i]=0;
        }

        for(int i=0;i<nums.size();i++){
            arr[nums[i]]=arr[nums[i]]+1;
        }

        for(int i=1;i<=size;i++){
            if(arr[i]==0){
                result.push_back(i);
            }
        }
        return result;
    }
};