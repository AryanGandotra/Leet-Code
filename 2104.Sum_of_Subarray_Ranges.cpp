class Solution
{
public:
    long long subArrayRanges(vector<int> &nums)
    {
        long long ans = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++)
        {
            int currMin = nums[i];
            int currMax = nums[i];
            for (int j = i; j < n; j++)
            {
                currMin = min(currMin, nums[j]);
                currMax = max(currMax, nums[j]);
                ans += (currMax - currMin);
            }
        }
        return ans;
    }
};