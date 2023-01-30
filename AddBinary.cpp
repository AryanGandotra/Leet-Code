#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    string addBinary(string a, string b) {
        if(a.length()==1 && b.length()==1 ){
            if(a[a.length()-1]="1" && b[0]==1){
                string c="10";
                return c;
            }
        }
        return "hello";
    }
};
using namespace std;
int main(){
    Solution s1;
    cout<<s1.addBinary("1","1")<<endl;
    return 0;
}