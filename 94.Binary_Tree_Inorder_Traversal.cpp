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
    vector<int> inorderTraversal(TreeNode *root)
    {
        stack<TreeNode *> st;
        vector<int> ans;
        TreeNode *current = root;

        while (!st.empty() || current != NULL)
        {
            while (current != NULL)
            {
                st.push(current);
                current = current->left;
            }

            TreeNode *node = st.top();
            ans.push_back(node->val);
            st.pop();
            current = node->right;
        }

        return ans;
    }
};

// class Solution {

// public:
//  vector<int> v1;
//     vector<int> inorderTraversal(TreeNode* root) {
//         if(root==NULL){
//             return {};
//         }
//         inorderTraversal(root->left);
//         v1.push_back(root->val);
//         inorderTraversal(root->right);
//         return v1;
//     }

// };