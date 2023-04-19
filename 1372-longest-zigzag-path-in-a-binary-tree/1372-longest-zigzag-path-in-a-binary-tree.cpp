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
    int MAX;
    unordered_map<TreeNode*, vector<int>> dp;
public:
    int longestZigZag(TreeNode* root) {
            dp.clear();
            dfs(root);
            return MAX;
        }

        void dfs(TreeNode* root) {
            if (!root) return;

            if (!root->left && !root->right) {
                dp[root] = {0, 0};
                return;
            }

            dfs(root->left);
            dfs(root->right);

            int left = 0, right = 0;

            if (dp.find(root->left) != dp.end())
                left = 1 + dp[root->left][1];

            if (dp.find(root->right) != dp.end())
                right = 1 + dp[root->right][0];

            dp[root] = {left, right};
            MAX = max(MAX, max(left, right));
        }
    };