class Solution {
public:
    bool isPalindrome(int x) {
    long num=x;
    if (num >= 0)
    {
    long reverse = 0, remainder;
    while (x != 0)
    {
        remainder = x % 10;
        reverse = reverse * 10 + remainder;
        x /= 10;
    }
        if (num == reverse)
            return true;
        else
            return false;
    }
    else
        return false;
    }
};