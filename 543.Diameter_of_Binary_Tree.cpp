class Solution {
public:
    int findMax(TreeNode* node, int& maxi){
        if(node==NULL)
            return 0;

        int lh = findMax(node->left,maxi);
        int rh = findMax(node->right,maxi);

        maxi = max(maxi,lh+rh);

        return 1 + max(lh,rh);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        int ans=0;
        findMax(root,ans);
        return ans;
    }
};

// class Solution
// {
// public:
//     pair<int, int> diameterHelper(TreeNode *root)
//     {
//         if (root == NULL)
//         {
//             pair<int, int> p = make_pair(0, 0);
//             return p;
//         }

//         pair<int, int> left = diameterHelper(root->left);
//         pair<int, int> right = diameterHelper(root->right);

//         int ob1 = left.first;
//         int ob2 = right.first;
//         int ob3 = left.second + right.second;

//         pair<int, int> ans;
//         ans.first = max(ob1, max(ob2, ob3));
//         ans.second = max(left.second, right.second) + 1;

//         return ans;
//     }

//     int diameterOfBinaryTree(TreeNode *root)
//     {
//         return diameterHelper(root).first;
//     }
// };

// class Solution {
// public:
//     int diameterOfBinaryTree(TreeNode* root) {
//         int result = 0;
//         dfs(root, result);
//         return result;
//     }
// private:
//     int dfs(TreeNode* root, int& result) {
//         if (root == NULL) {
//             return 0;
//         }

//         int left = dfs(root->left, result);
//         int right = dfs(root->right, result);

//         result = max(result, left + right);
//         return 1 + max(left, right);
//     }
// };

// class Solution {
// public:
//     int height(TreeNode* root){
//         if(root==NULL)
//             return 0;

//         int x = height(root->left);
//         int y = height(root->right);

//         return max(x,y)+1;
//     }

//     int diameterOfBinaryTree(TreeNode* root) {
//         if(root==NULL)
//             return 0;

//         int ob1 = diameterOfBinaryTree(root->left);
//         int ob2 = diameterOfBinaryTree(root->right);
//         int ob3 = height(root->left) + height(root->right);

//         return max(ob1,max(ob2,ob3));

//     }
// };