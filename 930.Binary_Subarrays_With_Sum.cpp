class Solution
{
public:
    int helper(vector<int> &nums, int goal)
    {
        int i = 0, j = 0;
        int currSum = 0;
        int ans = 0;

        if (goal < 0)
            return 0;

        while (j < nums.size())
        {
            currSum += nums[j];

            while (currSum > goal)
            {
                currSum -= nums[i];
                i++;
            }
            ans += j - i + 1;

            j++;
        }

        return ans;
    }
    int numSubarraysWithSum(vector<int> &nums, int goal)
    {
        return helper(nums, goal) - helper(nums, goal - 1);
    }
};