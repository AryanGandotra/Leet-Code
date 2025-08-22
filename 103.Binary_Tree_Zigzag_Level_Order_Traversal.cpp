class Solution
{
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode *root)
    {
        if (root == NULL)
            return {};

        vector<vector<int>> ans;
        queue<TreeNode *> q;

        q.push(root);
        bool leftToRight = true;

        while (!q.empty())
        {
            int n = q.size();
            vector<int> level(n);
            for (int i = 0; i < n; i++)
            {
                TreeNode *temp = q.front();
                int index = leftToRight ? i : n - i - 1;
                level[index] = temp->val;
                q.pop();
                if (temp->left)
                    q.push(temp->left);
                if (temp->right)
                    q.push(temp->right);
            }
            leftToRight = !leftToRight;
            ans.push_back(level);
        }
        return ans;
    }
};707. Design Linked List