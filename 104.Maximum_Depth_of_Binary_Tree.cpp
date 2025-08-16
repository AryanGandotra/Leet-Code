class Solution
{
public:
    int maxDepth(TreeNode *root)
    {
        if (root == NULL)
            return 0;

        return max(maxDepth(root->left), maxDepth(root->right)) + 1;
    }
};

// class Solution
// {
// public:
//     int maxDepth(TreeNode *root)
//     {
//         if (root == NULL)
//             return 0;

//         queue<TreeNode *> q;
//         q.push(root);

//         int height = 0;

//         while (!q.empty())
//         {
//             int level = q.size();

//             for (int i = 0; i < level; i++)
//             {
//                 TreeNode *node = q.front();
//                 q.pop();

//                 if (node->left)
//                     q.push(node->left);

//                 if (node->right)
//                     q.push(node->right);
//             }

//             height++;
//         }

//         return height;
//     }
// };