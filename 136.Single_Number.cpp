class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        map<int, int> freq;
        for (int x : nums)
        {
            freq[x]++;
        }

        int ans;

        for (auto x : freq)
        {
            if (x.second == 1)
                ans = x.first;
        }
        return ans;
    }
};