class Solution
{
public:
    int maxAscendingSum(vector<int> &nums)
    {
        int maxSum = 0;
        int sum = 0;

        sum += nums[0];
        maxSum = max(maxSum, sum);
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] > nums[i - 1])
            {
                sum += nums[i];
            }
            else
            {
                sum = nums[i];
            }
            maxSum = max(maxSum, sum);
        }

        return maxSum;
    }
};