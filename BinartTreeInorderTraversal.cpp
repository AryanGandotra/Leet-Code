#include <iostream>
#include <vector>
using namespace std;
//  Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution
{
    vector<int> v1;
public:
    vector<int> inorderTraversal(TreeNode *root)
    {
        inorderTraversal(root->left);
        cout << root->val;
        inorderTraversal(root->right);
    }
};
int main()
{
    Solution s1;
    TreeNode root(1,NULL,2,3);
    s1.inorderTraversal(root)
    return 0;
}