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
    bool isSameTree(TreeNode *p, TreeNode *q)
    {
        bool areSame = false;
        if (p == NULL && q == NULL)
        {
            return true;
        }
        else if (p == NULL || q == NULL)
        {
            return false;
        }
        else if (p->val != q->val)
        {
            return false;
        }
        else
        {
            areSame = isSameTree(p->left, q->right);
            if (areSame)
                areSame = isSameTree(p->right, q->left);
        }
        return areSame;
    }

    bool isSymmetric(TreeNode *root)
    {

        TreeNode *root1 = root->left;
        TreeNode *root2 = root->right;

        return isSameTree(root1, root2);
    }
};
