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
    vector<int> preorderTraversal(TreeNode *root)
    {
        vector<int> ans;
        stack<TreeNode *> st;

        st.push(root);

        while (!st.empty())
        {
            TreeNode *curr = st.top();
            st.pop();
            if (curr != NULL)
            {
                ans.push_back(curr->val);
                st.push(curr->right);
                st.push(curr->left);
            }
        }

        return ans;
    }
};

// class Solution {
// public:
//     vector<int> answer;

//     void dfs(TreeNode* node) {
//         if (node == nullptr) {
//             return;
//         }

//         answer.push_back(node->val);
//         dfs(node->left);
//         dfs(node->right);
//     }

//     vector<int> preorderTraversal(TreeNode* root) {
//         dfs(root);
//         return answer;
//     }
// };