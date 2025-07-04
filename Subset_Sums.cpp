class Solution
{
public:
    void helper(vector<int> arr, vector<int> &result, int index, int sum)
    {
        if (index > arr.size())
            return;

        if (index == arr.size())
        {
            result.push_back(sum);
            return;
        }

        helper(arr, result, index + 1, sum + arr[index]);
        helper(arr, result, index + 1, sum);
    }
    vector<int> subsetSums(vector<int> &arr)
    {
        vector<int> result;
        helper(arr, result, 0, 0);
        return result;
    }
};