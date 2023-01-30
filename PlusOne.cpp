#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool isNine(int n)
    {
        if (n == 9)
        {
            return true;
        }
        return false;
    }
    bool allNine(vector<int> v)
    {
        int size = v.size();
        int count = 0;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] == 9)
                count++;
        }
        if (count == size)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    vector<int> plusOne(vector<int> &digits)
    {
        int n = digits.size();
        if (n == 1 && (digits[n - 1] >= 0 && digits[n - 1] < 9))
        {
            digits[n - 1]++;
        }
        if (n == 1 && isNine(digits[n - 1]))
        {
            digits.push_back(0);
            digits[n - 1] = 1;
        }
        else if (n > 1)
        {
            if (allNine(digits))
            {
                if (isNine(digits[n - 1]))
                {
                    digits.push_back(0);
                    while (n > 0 && isNine(digits[n - 1]))
                    {
                        digits[n - 1] = 0;
                        n--;
                    }
                    // digits.insert(digits.begin(), 1);
                    digits[n]=1;
                }
            }
            else
            {
                if (isNine(digits[n - 1]))
                {

                    while (n >= 0 && isNine(digits[n - 1]))
                    {
                        digits[n - 1] = 0;
                        n--;
                    }
                }
                digits[n - 1]++;
            }
        }
        return digits;
    }
};
int main()
{
    Solution s1;
    vector<int> digits;
    int a[] = {9, 9};
    digits.assign(a, a + 2);
    s1.plusOne(digits);
    for (int i = 0; i < digits.size(); i++)
    {
        cout << digits[i] << " ";
    }
    cout << endl;
    return 0;
}