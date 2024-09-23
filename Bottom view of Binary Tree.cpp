class Solution
{
public:
    vector<int> bottomView(Node *root)
    {
        vector<int> result;

        if (root == NULL)
            return result;

        //  horizontal Distance -> val
        map<int, int> Nodes;

        queue<pair<Node *, int>> q;

        q.push({root, 0});

        while (!q.empty())
        {
            Node *temp = q.front().first;
            int horizontalDistance = q.front().second;

            q.pop();

            Nodes[horizontalDistance] = temp->data;

            if (temp->left)
            {
                q.push({temp->left, horizontalDistance - 1});
            }

            if (temp->right)
            {
                q.push({temp->right, horizontalDistance + 1});
            }
        }

        for (auto node : Nodes)
        {
            result.push_back(node.second);
        }

        return result;
    }
};