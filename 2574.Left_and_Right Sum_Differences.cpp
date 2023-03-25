class Solution
{
public:
    vector<int> leftRigthDifference(vector<int> &nums)
    {
        int total_sum = 0;

        vector<int> result;

        for (int i = 0; i < nums.size(); i++)
        {
            result.push_back(0);
        }

        for (int i = 0; i < nums.size(); i++)
        {
            total_sum += nums[i];
        }

        for (int i = 0; i < nums.size(); i++)
        {
            int left_sum = 0;
            int right_sum = 0;
            for (int j = 0; j < i; j++)
            {
                left_sum += nums[j];
            }
            right_sum = total_sum - left_sum - nums[i];
            result[i] = abs(left_sum - right_sum);
        }

        return result;
    }
};