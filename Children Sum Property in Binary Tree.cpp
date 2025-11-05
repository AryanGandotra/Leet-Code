class Solution
{
public:
    bool checkChildrenSum(TreeNode *root)
    {
        if (root == nullptr || (root->left == nullptr && root->right == nullptr))
            return 1;

        int left_data = 0, right_data = 0;

        if (root->left)
            left_data = root->left->val;
        if (root->right)
            right_data = root->right->val;

        if (root->val == left_data + right_data &&
            checkChildrenSum(root->left) &&
            checkChildrenSum(root->right))
            return 1;
        else
            return 0;
    }
};
