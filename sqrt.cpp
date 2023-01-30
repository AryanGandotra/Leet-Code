#include <iostream>
using namespace std;
class Solution
{
public:
    int mySqrt(int x)
    {
        if (x == 0 || x == 1)
            return x;
        int i = 1, result = 1;
        while (result <= x)
        {
            i++;
            result = i * i;
        }
        return i - 1;
    }
};

int main()
{
    Solution S1;
    cout<<S1.mySqrt(8)<<endl;
    return 0;
}