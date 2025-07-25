class Solution
{
public:
    int getDigitSum(int x)
    {
        if (x < 10)
            return x;

        int ans = 0;

        while (x > 0)
        {
            ans += x % 10;
            x /= 10;
        }

        return ans;
    }
    int smallestIndex(vector<int> &nums)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if (getDigitSum(nums[i]) == i)
                return i;
        }

        return -1;
    }
};