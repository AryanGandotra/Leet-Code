class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> result;
        int vecSize = nums.size();
        for (int i = 0; i < vecSize; i++)
        {
            for (int j = i + 1; j < vecSize; j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    result.push_back(i);
                    result.push_back(j);
                }
            }
        }
        return result;
    }
};