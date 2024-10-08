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
    vector<int> rightSideView(TreeNode *root)
    {
        vector<int> result;

        if (root == NULL)
            return result;

        queue<TreeNode *> q;

        q.push(root);

        vector<vector<int>> ans;

        while (!q.empty())
        {
            vector<int> v;

            int n = q.size();

            for (int i = 0; i < n; i++)
            {
                TreeNode *temp = q.front();
                q.pop();

                v.push_back(temp->val);

                if (temp->left)
                    q.push(temp->left);

                if (temp->right)
                    q.push(temp->right);
            }

            ans.push_back(v);
        }

        for (int i = 0; i < ans.size(); i++)
        {
            result.push_back(ans[i][ans[i].size() - 1]);
        }

        return result;
    }
};