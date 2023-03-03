class Solution
{
public:
    bool found(vector<int> &nums, int original)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == original)
                return true;
        }

        return false;
    }
    int findFinalValue(vector<int> &nums, int original)
    {

        while (found(nums, original))
        {
            original = 2 * original;
        }

        return original;
    }
};