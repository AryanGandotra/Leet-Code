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
    TreeNode *lowestCommonAncestor(TreeNode *root, int p, int q)
    {
        if (root == NULL)
            return NULL;

        if (root->val == p || root->val == q)
            return root;

        TreeNode *leftN = lowestCommonAncestor(root->left, p, q);
        TreeNode *rightN = lowestCommonAncestor(root->right, p, q);

        if (leftN != NULL && rightN != NULL)
            return root;

        if (leftN != NULL)
            return leftN;

        return rightN;
    }

    bool findPath(TreeNode *LCA, int val, string &s)
    {
        if (LCA == NULL)
            return false;

        if (LCA->val == val)
            return true;

        s += 'L';
        if (findPath(LCA->left, val, s) == true)
            return true;

        s.pop_back();
        s += 'R';
        if (findPath(LCA->right, val, s) == true)
            return true;
        s.pop_back();
        return false;
    }

    string getDirections(TreeNode *root, int startValue, int destValue)
    {
        TreeNode *LCA = lowestCommonAncestor(root, startValue, destValue);
        string LCAToSrc = "";
        string LCAToDest = "";

        findPath(LCA, startValue, LCAToSrc);
        findPath(LCA, destValue, LCAToDest);

        string res = "";

        int n = LCAToSrc.length();

        for (int i = 0; i < n; i++)
        {
            res += 'U';
        }

        res += LCAToDest;

        return res;
    }
};