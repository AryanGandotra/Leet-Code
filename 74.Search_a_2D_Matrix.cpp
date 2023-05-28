class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int rows = matrix.size();
        int cols = matrix[0].size();

        int start = 0;
        int end = (rows * cols) - 1;
        int mid = start + (end - start) / 2;

        while (start <= end)
        {
            int element = matrix[mid / cols][mid % cols];
            if (element == target)
            {
                return true;
            }
            else if (element < target)
            {
                // start = (cols*(mid/cols) + mid%cols)+1;
                start = mid + 1;
            }
            else
            {
                // end = (cols*(mid/cols) + mid%cols)- 1;
                end = mid - 1;
            }
            mid = start + (end - start) / 2;
        }
        return false;
    }
};