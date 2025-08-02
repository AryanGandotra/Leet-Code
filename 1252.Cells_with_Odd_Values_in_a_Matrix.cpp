class Solution
{
public:
    void incrementRowCol(vector<vector<int>> &matrix, int rowToIncrement,
                         int colToIncrement)
    {
        for (int i = 0; i < matrix[0].size(); i++)
        {
            matrix[rowToIncrement][i]++;
        }

        for (int i = 0; i < matrix.size(); i++)
        {
            matrix[i][colToIncrement]++;
        }
    }

    int getOddValues(vector<vector<int>> matrix)
    {
        int ans = 0;

        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[i].size(); j++)
            {
                if (matrix[i][j] % 2 == 1)
                    ans++;
            }
        }

        return ans;
    }
    int oddCells(int m, int n, vector<vector<int>> &indices)
    {
        vector<vector<int>> matrix(m, vector<int>(n, 0));
        for (int i = 0; i < indices.size(); i++)
        {
            int rowToIncrement = indices[i][0];
            int colToIncrement = indices[i][1];
            incrementRowCol(matrix, rowToIncrement, colToIncrement);
        }
        return getOddValues(matrix);
    }
};