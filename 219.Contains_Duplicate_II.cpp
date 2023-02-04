#include <iostream>
#include<map>
#include<vector>
using namespace std;
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

        map<int,int> map1;
        bool result=false;
        if(nums.size()==1){
            return false;
        }
        for(int i=0;i<nums.size();i++){
            // map<int,int>::iterator it = map1.find(nums[i]);
            auto it = map1.find(nums[i]);  
            cout<<"i: "<<i<<"    nums[i]: "<<nums[i]<<"   it->second: "<<it->second<<endl;
            if (it!= map1.end())
            {
                if(abs(i-(it->second)) <= k){
                    result=true;
                    
                    // break;
                }
                // map1.insert(pair<int,int>(nums[i],i));
            }
            // else{
                map1.insert(pair<int,int>(nums[i],i));
                // }
        }
        // map<int, int>::iterator it = map1.begin();
        // while (it != map1.end())
        // {
        // cout << "Key: " << it->first << ", Value: " << it->second <<endl;
        // it++;
        // }
        return result;
    }
};
int main()
{
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(1);
    Solution s1;
    if(s1.containsNearbyDuplicate(nums,1)){
        cout<<"present"<<endl;
    }
    else{
        cout<<"not present"<<endl;
    }
}