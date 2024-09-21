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
class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        // Map: horizontal distance -> map (depth -> multiset of nodes at that depth)
        map<int, map<int, multiset<int>>> nodes;

        // Queue for BFS: storing the node, its horizontal distance, and depth
        queue<pair<TreeNode*, pair<int, int>>> q;
        q.push({root, {0, 0}});

        while (!q.empty()) {
            auto node = q.front();
            q.pop();
            
            TreeNode* temp = node.first;
            int hd = node.second.first;  // Horizontal distance
            int depth = node.second.second;  // Vertical depth

            // Insert node value into the map based on horizontal distance and depth
            nodes[hd][depth].insert(temp->val);

            // Add left and right children to the queue
            if (temp->left) {
                q.push({temp->left, {hd - 1, depth + 1}});
            }
            if (temp->right) {
                q.push({temp->right, {hd + 1, depth + 1}});
            }
        }
        // cout << "Map (Horizontal Distance -> (Depth -> Node Values)):" << endl;
        // for (auto hd_pair : nodes) {
        //     cout << "HD " << hd_pair.first << ": " << endl;
        //     for (auto depth_pair : hd_pair.second) {
        //         cout << "  Depth " << depth_pair.first << ": ";
        //         for (auto val : depth_pair.second) {
        //             cout << val << " ";
        //         }
        //         cout << endl;
        //     }
        // }

        // To store the result
        vector<vector<int>> result;

        // Iterate through the map and extract values
        for (auto p : nodes) {
            vector<int> col;
            for (auto q : p.second) {
                col.insert(col.end(), q.second.begin(), q.second.end());
            }
            result.push_back(col);
        }

        return result;
    }

};