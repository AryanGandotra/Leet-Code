/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    bool DFS(TreeNode *root, int currSum, int targetSum)
    {
        if (root == NULL)
            return false;

        currSum += root->val;
        if (root->left == NULL && root->right == NULL)
        {
            return currSum == targetSum;
        }

        return DFS(root->left, currSum, targetSum) || DFS(root->right, currSum, targetSum);
    }
    bool hasPathSum(TreeNode *root, int targetSum)
    {
        int currSum = 0;
        return DFS(root, currSum, targetSum);
    }
};