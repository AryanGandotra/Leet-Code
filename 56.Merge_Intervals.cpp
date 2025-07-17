class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        if (intervals.size() == 1)
            return intervals;

        vector<vector<int>> ans;

        sort(intervals.begin(), intervals.end());

        ans.push_back({intervals[0][0], intervals[0][1]});

        for (int i = 1; i < intervals.size(); i++)
        {
            int n = ans.size() - 1;
            if (intervals[i][0] <= ans[n][1])
            {
                ans[n][0] = min(ans[n][0], intervals[i][0]);
                ans[n][1] = max(ans[n][1], intervals[i][1]);
            }
            else
            {
                ans.push_back({intervals[i][0], intervals[i][1]});
            }
        }

        return ans;
    }
};