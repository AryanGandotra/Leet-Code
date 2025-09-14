class Solution
{
public:
    vector<vector<int>> verticalTraversal(TreeNode *root)
    {
        vector<vector<int>> ans;
        map<int, map<int, multiset<int>>> ds;

        queue<pair<TreeNode *, pair<int, int>>> q;

        if (!root)
            return ans;

        q.push({root, {0, 0}});

        while (!q.empty())
        {
            auto elementData = q.front();
            q.pop();
            TreeNode *temp = elementData.first;
            int x = elementData.second.first;
            int y = elementData.second.second;

            ds[x][y].insert(temp->val);

            if (temp->left)
                q.push({temp->left, {x - 1, y + 1}});
            if (temp->right)
                q.push({temp->right, {x + 1, y + 1}});
        }

        for (auto p : ds)
        {
            vector<int> col;
            for (auto q : p.second)
            {
                col.insert(col.end(), q.second.begin(), q.second.end());
            }
            ans.push_back(col);
        }

        return ans;
    }
};