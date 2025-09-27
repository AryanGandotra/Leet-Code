class Solution
{
public:
    vector<int> bottomView(Node *root)
    {
        map<int, Node *> mapping;
        vector<int> ans;

        if (!root)
            return ans;

        queue<pair<int, Node *>> q;

        q.push({0, root});

        while (!q.empty())
        {
            pair<int, Node *> NodeDetails = q.front();
            q.pop();

            int horizontalDistance = NodeDetails.first;
            Node *node = NodeDetails.second;

            mapping[horizontalDistance] = node;

            if (node->left)
            {
                q.push({horizontalDistance - 1, node->left});
            }

            if (node->right)
            {
                q.push({horizontalDistance + 1, node->right});
            }
        }

        for (auto &x : mapping)
        {
            ans.push_back(x.second->data);
        }

        return ans;
    }
};