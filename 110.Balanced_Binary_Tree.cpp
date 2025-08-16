class Solution
{
public:
    pair<bool, int> helper(TreeNode *root)
    {
        if (root == NULL)
        {
            return {true, 0};
        }

        pair<bool, int> left = helper(root->left);
        pair<bool, int> right = helper(root->right);

        int left_balanced = left.first;
        int right_balanced = right.first;
        bool heightDiff = abs(left.second - right.second) <= 1;

        if (left_balanced && right_balanced && heightDiff)
        {
            return {true, max(left.second, right.second) + 1};
        }

        return {false, max(left.second, right.second) + 1};
    }

    bool isBalanced(TreeNode *root) { return helper(root).first; }
};

// class Solution {
// public:
//     int height(TreeNode* root){
//         if(root==NULL)
//             return 0;

//         int x = height(root->left);
//         int y = height(root->right);

//         return max(x,y)+1;
//     }
//     bool isBalanced(TreeNode* root) {
//         if(root == NULL)
//             return true;

//         bool left = isBalanced(root->left);
//         bool right = isBalanced(root->right);
//         bool difference =  abs(height(root->left)-height(root->right))<=1;
//         if( left && right && difference )
//             return true;

//         return false;
//     }
// };