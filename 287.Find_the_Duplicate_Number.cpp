class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        int size = nums.size();
        int result;
        int arr[size];
        for (int i = 1; i < size; i++)
        {
            arr[i] = 0;
        }

        for (int i = 0; i < nums.size(); i++)
        {
            arr[nums[i]]++;
        }

        for (int i = 1; i < size; i++)
        {
            if (arr[i] > 1)
            {
                result = i;
            }
        }

        return result;
    }
};