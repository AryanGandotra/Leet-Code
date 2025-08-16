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
    int helper(TreeNode *root)
    {
        if (root == NULL)
            return 0;

        return max(helper(root->left), helper(root->right)) + 1;
    }
    int maxDepth(TreeNode *root)
    {
        return helper(root);
    }
};
//  Level Order Traversal Approach

// class Solution {
// public:
//     int maxDepth(TreeNode* root) {
//         vector<vector<int>> ans;

//         if(root==NULL)
//             return 0;

//         queue<TreeNode*> q;
//         q.push(root);

//         while(!q.empty()){
//             int n = q.size();
//             vector<int> a;

//             for(int i=0;i<n;i++){
//                 TreeNode* temp = q.front();
//                 q.pop();
//                 a.push_back(temp->val);

//                 if(temp->left)
//                     q.push(temp->left);

//                 if(temp->right)
//                     q.push(temp->right);
//             }

//             ans.push_back(a);
//         }

//         return ans.size();
//     }
// };
