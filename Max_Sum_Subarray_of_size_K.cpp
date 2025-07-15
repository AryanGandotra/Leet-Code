class Solution
{
public:
    int maximumSumSubarray(vector<int> &arr, int k)
    {
        int maxSum = 0, sum = 0;

        for (int i = 0; i < k; i++)
        {
            sum += arr[i];
        }

        maxSum = sum;

        for (int i = k; i < arr.size(); i++)
        {
            sum += arr[i] - arr[i - k];
            maxSum = max(maxSum, sum);
        }

        return maxSum;
    }
};