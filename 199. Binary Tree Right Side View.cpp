class Solution
{
public:
    vector<int> rightSideView(TreeNode *root)
    {
        vector<int> ans;
        if (!root)
            return ans;

        map<int, int> mapping;
        queue<pair<int, TreeNode *>> q;

        q.push({0, root});

        while (!q.empty())
        {
            pair<int, TreeNode *> nodeDetails = q.front();
            q.pop();

            int verticalDistance = nodeDetails.first;
            TreeNode *node = nodeDetails.second;

            mapping[verticalDistance] = node->val;

            if (node->left)
            {
                q.push({verticalDistance + 1, node->left});
            }

            if (node->right)
            {
                q.push({verticalDistance + 1, node->right});
            }
        }

        for (auto x : mapping)
        {
            ans.push_back(x.second);
        }

        return ans;
    }
};