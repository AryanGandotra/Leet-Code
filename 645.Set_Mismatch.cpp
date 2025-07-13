class Solution
{
public:
    vector<int> findErrorNums(vector<int> &nums)
    {
        int wrongInsertion = -1, correctInsertion = -1;
        vector<int> arr(nums.size(), 0);

        for (int i = 0; i < nums.size(); i++)
        {
            arr[nums[i] - 1]++;
        }

        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == 0)
                correctInsertion = i + 1;
            if (arr[i] == 2)
                wrongInsertion = i + 1;

            if (correctInsertion != -1 && wrongInsertion != -1)
                break;
        }

        return {wrongInsertion, correctInsertion};
    }
};