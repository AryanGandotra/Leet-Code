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

//  Morris Traversal Time-O(N) Space-O(1)
class Solution
{
public:
    vector<int> inorderTraversal(TreeNode *root)
    {
        vector<int> ans;
        if (root == NULL)
            return ans;

        TreeNode *curr = root, *pre;

        while (curr != NULL)
        {
            if (curr->left == NULL)
            {
                ans.push_back(curr->val);
                curr = curr->right;
            }
            else
            {
                pre = curr->left;
                while (pre->right != NULL && pre->right != curr)
                    pre = pre->right;

                if (pre->right == NULL)
                {
                    pre->right = curr;
                    curr = curr->left;
                }
                else
                {
                    pre->right = NULL;
                    ans.push_back(curr->val);
                    curr = curr->right;
                }
            }
        }

        return ans;
    }
};

// class Solution {
// public:
//     vector<int> inorderTraversal(TreeNode* root) {
//         stack<TreeNode*> st;
//         vector<int> ans;
//         TreeNode* current = root;

//         while(!st.empty() || current!=NULL){
//             while(current!=NULL){
//                 st.push(current);
//                 current=current->left;
//             }

//             TreeNode* node = st.top();
//             ans.push_back(node->val);
//             st.pop();
//             current=node->right;
//         }

//         return ans;
//     }
// };

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