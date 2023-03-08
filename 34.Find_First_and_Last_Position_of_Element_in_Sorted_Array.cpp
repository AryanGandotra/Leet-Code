class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        vector<int> result;
        result.push_back(-1);
        result.push_back(-1);
        int count = 1;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == target)
            {
                if (count == 1)
                {
                    result[0] = i;
                    count++;
                }
                result[1] = i;
            }
        }
        return result;
    }
};