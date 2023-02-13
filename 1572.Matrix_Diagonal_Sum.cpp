class Solution
{
public:
    int diagonalSum(vector<vector<int>> &mat)
    {
        int sum = 0;
        cout << mat.size();
        if (mat.size() == 1)
        {
            sum = mat[0][0];
        }
        else
        {
            for (int i = 0; i < mat.size(); i++)
            {
                for (int j = 0; j < mat[i].size(); j++)
                {
                    if (i == j)
                    {
                        sum = sum + mat[i][j];
                    }
                    if (i + j == mat.size() - 1 && i != j)
                    {
                        sum = sum + mat[i][j];
                    }
                }
            }
        }
        return sum;
    }
};