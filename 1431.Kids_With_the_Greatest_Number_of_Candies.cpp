class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {

        vector<int> addCandies;
        vector<bool> result;
        int max = INT_MIN;

        for (int i = 0; i < candies.size(); i++)
        {
            if (max < candies[i])
            {
                max = candies[i];
            }
            addCandies.push_back(candies[i] + extraCandies);
        }

        for (int i = 0; i < addCandies.size(); i++)
        {
            result.push_back(false);
        }

        for (int i = 0; i < addCandies.size(); i++)
        {
            if (addCandies[i] >= max)
            {
                result[i] = true;
            }
        }

        return result;
    }
};