class Solution
{
public:
    bool isIncreasing(vector<int> &nums)
    {
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i - 1] > nums[i])
                return false;
        }

        return true;
    }

    bool isDecreasing(vector<int> &nums)
    {
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i - 1] < nums[i])
                return false;
        }

        return true;
    }

    bool isMonotonic(vector<int> &nums)
    {
        return isIncreasing(nums) || isDecreasing(nums);
    }
};