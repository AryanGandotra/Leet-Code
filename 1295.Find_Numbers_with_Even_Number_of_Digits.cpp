class Solution
{
public:
    int findNumbers(vector<int> &nums)
    {
        int result = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            int digits = 0;
            while (nums[i] > 0)
            {
                int rem = nums[i] % 10;
                digits++;
                nums[i] = nums[i] / 10;
            }
            if (digits % 2 == 0)
            {
                result++;
            }
        }
        return result;
    }
};