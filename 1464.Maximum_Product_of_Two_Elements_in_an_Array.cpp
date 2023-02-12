class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        int max_1 = INT_MIN;
        int max_1_index = -1;
        int max_2 = INT_MIN;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > max_1)
            {
                max_1 = nums[i];
                max_1_index = i;
            }
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (i != max_1_index && nums[i] > max_2)
            {
                max_2 = nums[i];
            }
        }
        cout << max_1 << " " << max_2 << endl;
        return (max_1 - 1) * (max_2 - 1);
    }
};