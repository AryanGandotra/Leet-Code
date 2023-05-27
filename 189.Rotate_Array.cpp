class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        vector<int> arr2(nums.size());
        for (int i = 0; i < nums.size(); i++)
        {
            arr2[(i + k) % nums.size()] = nums[i];
        }

        for (int i = 0; i < nums.size(); i++)
        {
            nums[i] = arr2[i];
        }
    }
};