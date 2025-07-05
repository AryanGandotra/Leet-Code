class Solution
{
public:
    bool isSafe(vector<vector<int>> &maze, int row, int col, int numRow, int numCol)
    {
        if (row >= 0 && row < numRow && col >= 0 && col < numCol)
        {
            if (maze[row][col] == 1)
                return true;
        }

        return false;
    }

    void solve(vector<vector<int>> &maze, vector<string> &ans, int row, int col, int numRow, int numCol, string str)
    {
        if (row == numRow - 1 && col == numCol - 1)
        {
            ans.push_back(str);
            return;
        }

        maze[row][col] = -1;
        // move down
        if (isSafe(maze, row + 1, col, numRow, numCol))
        {
            solve(maze, ans, row + 1, col, numRow, numCol, str + "D");
        }

        // move left
        if (isSafe(maze, row, col - 1, numRow, numCol))
        {
            solve(maze, ans, row, col - 1, numRow, numCol, str + "L");
        }

        // move right
        if (isSafe(maze, row, col + 1, numRow, numCol))
        {
            solve(maze, ans, row, col + 1, numRow, numCol, str + "R");
        }

        // move up
        if (isSafe(maze, row - 1, col, numRow, numCol))
        {
            solve(maze, ans, row - 1, col, numRow, numCol, str + "U");
        }

        // Backtrack: unmark current cell
        maze[row][col] = 1;
    }
    vector<string> ratInMaze(vector<vector<int>> &maze)
    {
        vector<string> ans;
        int m = maze.size();
        int n = maze[0].size();

        if (maze[0][0] == 0)
            return ans;

        solve(maze, ans, 0, 0, m, n, "");
        return ans;
    }
};