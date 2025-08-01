class Solution
{
public:
    vector<int> arrayRankTransform(vector<int> &arr)
    {
        map<int, int> ranks;
        vector<int> sortedArr = arr;
        sort(sortedArr.begin(), sortedArr.end());

        int rank = 1;

        for (int x : sortedArr)
        {
            if (ranks.count(x) == 0)
            {
                ranks[x] = rank++;
            }
        }

        for (int i = 0; i < arr.size(); i++)
        {
            arr[i] = ranks[arr[i]];
        }

        return arr;
    }
};