class Solution
{
public:
    int arraySign(vector<int> &nums)
    {
        unsigned int product = 1;
        int numberOfNegatives = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                return 0;
            }
            product = product * nums[i];
            if (nums[i] < 0)
            {
                numberOfNegatives++;
            }
        }
        if (numberOfNegatives % 2 == 1)
        {
            return -1;
        }
        else
        {
            return 1;
        }
    }
};