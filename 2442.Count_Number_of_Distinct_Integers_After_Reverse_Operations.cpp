class Solution
{
public:
    int countDistinctIntegers(vector<int> &nums)
    {
        set<int> digits;

        for (int i = 0; i < nums.size(); i++)
        {
            int num = nums[i];
            digits.insert(num);
            int rev_num = 0;
            while (num > 0)
            {
                rev_num = rev_num * 10 + num % 10;
                num = num / 10;
            }
            digits.insert(rev_num);
        }
        return digits.size();
    }
};