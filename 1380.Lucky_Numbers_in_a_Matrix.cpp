class Solution
{
public:
    vector<int> luckyNumbers(vector<vector<int>> &matrix)
    {
        vector<int> rowMin(matrix.size());
        vector<int> colMax(matrix[0].size());

        for (int i = 0; i < matrix.size(); i++)
        {
            int minVal = INT_MAX;
            for (int j = 0; j < matrix[i].size(); j++)
            {
                minVal = min(minVal, matrix[i][j]);
            }
            rowMin[i] = minVal;
        }

        for (int j = 0; j < matrix[0].size(); j++)
        {
            int maxVal = INT_MIN;
            for (int i = 0; i < matrix.size(); i++)
            {
                maxVal = max(maxVal, matrix[i][j]);
            }
            colMax[j] = maxVal;
        }

        vector<int> luckyNums;

        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[i].size(); j++)
            {
                if (matrix[i][j] == rowMin[i] && matrix[i][j] == colMax[j])
                {
                    luckyNums.push_back(matrix[i][j]);
                }
            }
        }

        return luckyNums;
    }
};