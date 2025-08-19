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
            areSame = isSameTree(p->left, q->left);
            if (areSame)
                areSame = isSameTree(p->right, q->right);
        }
        return areSame;
    }
};
