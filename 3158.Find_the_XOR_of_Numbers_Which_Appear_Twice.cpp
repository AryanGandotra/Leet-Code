class Solution
{
public:
    int duplicateNumbersXOR(vector<int> &nums)
    {
        int ans = 0;

        map<int, int> freq;

        for (int i = 0; i < nums.size(); i++)
        {
            freq[nums[i]]++;

            if (freq[nums[i]] == 2)
                ans = ans ^ nums[i];
        }

        return ans;
    }
};