class Solution
{
public:
    int heightChecker(vector<int> &heights)
    {
        vector<int> sorted;
        int result = 0;
        for (int i = 0; i < heights.size(); i++)
        {
            sorted.push_back(heights[i]);
        }
        sort(heights.begin(), heights.end());
        for (int i = 0; i < heights.size(); i++)
        {
            if (heights[i] != sorted[i])
            {
                result++;
            }
        }
        return result;
    }
};