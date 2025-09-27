class Solution
{
public:
    void helper(Node *root, vector<int> &ans, vector<vector<int>> &result)
    {
        if (root == NULL)
            return;

        ans.push_back(root->data);

        if (root->left == NULL && root->right == NULL)
        {
            result.push_back(ans);
        }
        else
        {
            if (root->left)
                helper(root->left, ans, result);
            if (root->right)
                helper(root->right, ans, result);
        }

        ans.pop_back();
    }

    vector<vector<int>> Paths(Node *root)
    {
        vector<vector<int>> result;
        vector<int> ans;
        helper(root, ans, result);
        return result;
    }
};