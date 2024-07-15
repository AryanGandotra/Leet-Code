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
    TreeNode *createBinaryTree(vector<vector<int>> &descriptions)
    {
        map<int, TreeNode *> map1;
        map<int, bool> getRootNode;

        int n = descriptions.size();

        for (int i = 0; i < n; i++)
        {
            getRootNode[descriptions[i][1]] = false; // mark as child
            if (getRootNode.find(descriptions[i][0]) == getRootNode.end())
            {
                getRootNode[descriptions[i][0]] = true; // mark as potential root
            }
        }

        // for(auto &it:getRootNode){
        //     cout<<it.first<<"--->"<<it.second<<endl;
        // }

        for (int i = 0; i < n; i++)
        {
            TreeNode *currNode;
            if (map1.find(descriptions[i][0]) == map1.end())
            {
                // if that node is not present in the map create it
                currNode = new TreeNode(descriptions[i][0]);
                // store the adress of that node in the value corresponding to the key of the map
                map1[descriptions[i][0]] = currNode;
            }
            else
            {
                currNode = map1[descriptions[i][0]];
            }

            // check if the child node of the curr element is created or not
            // if not created create one
            TreeNode *currNodeChild;
            if (map1.find(descriptions[i][1]) == map1.end())
            {
                currNodeChild = new TreeNode(descriptions[i][1]);
                map1[descriptions[i][1]] = currNodeChild;
            }
            else
            {
                currNodeChild = map1[descriptions[i][1]];
            }

            if (descriptions[i][2] == 1)
            {
                currNode->left = currNodeChild;
            }
            else
            {
                currNode->right = currNodeChild;
            }
        }

        TreeNode *root = nullptr;
        for (const auto &it : getRootNode)
        {
            if (it.second)
            { // Find the node which is marked as a potential root (true)
                root = map1[it.first];
                break;
            }
        }

        return root;
    }
};