class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {
        int total_sum = 0;
        for (int x : nums)
        {
            total_sum += x;
        }
        int curr_sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (2 * curr_sum == total_sum - nums[i])
            {
                return i;
            }
            curr_sum += nums[i];
        }
        return -1;
    }
};
