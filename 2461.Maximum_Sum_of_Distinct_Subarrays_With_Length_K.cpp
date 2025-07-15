class Solution
{
public:
    long long maximumSubarraySum(vector<int> &nums, int k)
    {
        unordered_map<int, int> freq;
        long long maxSum = 0, sum = 0;
        int left = 0, right = 0;

        while (right < nums.size())
        {
            freq[nums[right]]++;
            sum += nums[right];

            if (right - left + 1 > k)
            {
                freq[nums[left]]--;
                sum -= nums[left];
                if (freq[nums[left]] == 0)
                    freq.erase(nums[left]);
                left++;
            }

            if (right - left + 1 == k && freq.size() == k)
            {
                maxSum = max(maxSum, sum);
            }

            right++;
        }

        return maxSum;
    }
};