class Solution
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int> &nums)
    {
        int size = nums.size();
        vector<int> result(size, 0);
        for (int i = 0; i < nums.size(); i++)
        {
            int less = 0;
            for (int j = 0; j < nums.size(); j++)
            {
                if (nums[j] < nums[i] && i != j)
                {
                    less++;
                }
            }
            result[i] = less;
        }
        return result;
    }
};