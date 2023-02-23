class Solution
{
public:
    int findKthLargest(vector<int> &nums, int k)
    {
        int max = INT_MIN;
        sort(nums.begin(), nums.end(), greater<int>());

        for (int i = 0; i < k; i++)
            max = nums[i];

        return max;
    }
};