class Solution
{
public:
    const int MOD = 1e9 + 7;

    long long myPow(long long x, long long n)
    {
        if (x == 0)
            return 0;
        if (n == 0)
            return 1;
        long long res = myPow(x, n / 2);
        res = (res * res) % MOD;

        if (n % 2 == 1)
        {
            res = (res * x) % MOD;
        }

        return res % MOD;
    }

    int numSubseq(vector<int> &nums, int target)
    {
        sort(nums.begin(), nums.end());
        int l = 0, r = nums.size() - 1;
        long long count = 0;

        while (l <= r)
        {
            if (nums[l] + nums[r] > target)
            {
                r--;
            }
            else
            {
                count = (count + myPow(2, r - l)) % MOD;
                l++;
            }
        }

        return count;
    }
};