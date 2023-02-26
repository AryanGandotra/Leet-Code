class Solution
{
public:
    int differenceOfSum(vector<int> &nums)
    {
        int sumOfNumbers = 0;
        int sumOfDigits = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sumOfNumbers += nums[i];
        }

        for (int i = 0; i < nums.size(); i++)
        {
            int rem;
            while (nums[i] > 0)
            {
                rem = nums[i] % 10;
                sumOfDigits += rem;
                nums[i] = nums[i] / 10;
            }
        }

        return abs(sumOfNumbers - sumOfDigits);
    }
};