class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {
        for (int i = 1; i < nums.size(); i++)
        {
            for (int j = i - 1; j < i; j++)
            {
                nums[i] += nums[j];
            }
        }
        return nums;
    }
};