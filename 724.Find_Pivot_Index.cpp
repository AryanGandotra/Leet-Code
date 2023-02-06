class Solution
{
public:
    int calculateSum(vector<int> &nums)
    {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
        }
        return sum;
    }
    int pivotIndex(vector<int> &nums)
    {
        int sum = calculateSum(nums);
        int sum_current = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if ((2 * (sum_current) + nums[i]) == sum)
            {
                return i;
            }
            sum_current = sum_current + nums[i];
        }
        return -1;
    }
};