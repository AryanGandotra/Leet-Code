class Solution
{
public:
    vector<string> findRelativeRanks(vector<int> &score)
    {
        map<int, int> scoreToRank;

        vector<int> sortedScores = score;
        sort(sortedScores.begin(), sortedScores.end(), greater<int>());

        int rank = 1;
        for (int score : sortedScores)
        {
            if (scoreToRank.count(score) == 0)
            {
                scoreToRank[score] = rank++;
            }
        }

        vector<string> ans(score.size());
        int count = 4;

        for (int i = 0; i < score.size(); i++)
        {
            switch (scoreToRank[score[i]])
            {
            case 1:
                ans[i] = "Gold Medal";
                break;
            case 2:
                ans[i] = "Silver Medal";
                break;
            case 3:
                ans[i] = "Bronze Medal";
                break;
            default:
                ans[i] = to_string(scoreToRank[score[i]]);
                break;
            }
        }

        return ans;
    }
};