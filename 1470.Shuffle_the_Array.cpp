class Solution
{
public:
    vector<int> shuffle(vector<int> &nums, int n)
    {
        vector<int> ans(2 * n, 0);
        int x = 0, y = n;
        for (int i = 0; i < ans.size(); i++)
        {
            if (i % 2 == 0)
                ans[i] = nums[x++];
            else
                ans[i] = nums[y++];
        }
        return ans;
    }
};