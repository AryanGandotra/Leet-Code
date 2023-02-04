class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int n = nums.size();
        int *arr = new int[n + 1];
        for (int i = 0; i <= n; i++)
        {
            arr[i] = 0;
        }
        for (int i = 0; i < n; i++)
        {
            arr[nums[i]] = arr[nums[i]] + 1;
        }
        int i;
        for (i = 0; i <= n; ++i)
        {
            if (arr[i] == 0)
            {
                break;
            }
        }

        return i;
    }
};