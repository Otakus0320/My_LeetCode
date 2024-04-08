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
    int dep = 0;
    int max_dep = 0;
    int maxDepth(TreeNode* root) {
        traverse(root);
        return max_dep;
    }
    void traverse(TreeNode* root)
    {
        if(root == nullptr) return;
        dep++;
        traverse(root->left);
        if(max_dep <= dep) max_dep = dep;
        traverse(root->right);
        dep--;
    }
};
