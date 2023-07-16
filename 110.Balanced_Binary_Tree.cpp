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
    pair<bool, int> isBalancedHelper(TreeNode *root)
    {
        if (root == NULL)
        {
            pair<bool, int> p = make_pair(true, 0);
            return p;
        }

        pair<bool, int> left = isBalancedHelper(root->left);
        pair<bool, int> right = isBalancedHelper(root->right);

        bool left_ans = left.first;
        bool right_ans = right.first;
        bool difference = abs(left.second - right.second) <= 1;

        pair<bool, int> ans;

        if (left_ans && right_ans && difference)
            ans.first = true;
        else
            ans.first = false;
        ans.second = max(left.second, right.second) + 1;

        return ans;
    }
    bool isBalanced(TreeNode *root)
    {
        return isBalancedHelper(root).first;
    }
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