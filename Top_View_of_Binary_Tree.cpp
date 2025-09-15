class Solution
{
public:
    vector<int> topView(Node *root)
    {
        vector<int> ans;

        map<int, int> topNode;

        if (!root)
            return ans;

        queue<pair<Node *, int>> q;
        q.push({root, 0});

        while (!q.empty())
        {
            auto elementData = q.front();
            q.pop();

            Node *temp = elementData.first;
            int x = elementData.second;

            if (topNode.find(x) == topNode.end())
            {
                topNode[x] = temp->data;
            }

            if (temp->left)
                q.push({temp->left, x - 1});

            if (temp->right)
                q.push({temp->right, x + 1});
        }

        for (auto p : topNode)
        {
            ans.push_back(p.second);
        }

        return ans;
    }
};