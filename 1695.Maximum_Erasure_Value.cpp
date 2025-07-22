class Solution
{
public:
    int maximumUniqueSubarray(vector<int> &nums)
    {
        set<int> s;
        int i = 0, j = 0;
        int currSum = 0;
        int maxSum = 0;

        while (j < nums.size())
        {
            while (s.find(nums[j]) != s.end())
            {
                s.erase(nums[i]);
                currSum -= nums[i];
                i++;
            }
            currSum += nums[j];
            s.insert(nums[j]);
            maxSum = max(maxSum, currSum);
            j++;
        }

        return maxSum;
    }
};