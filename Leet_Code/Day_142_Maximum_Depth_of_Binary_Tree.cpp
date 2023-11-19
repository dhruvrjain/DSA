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
    int ans=0;
    void traverse(TreeNode* node,int d){
        if(d>ans) ans=d;
        if(!node) return;
        d++;
        traverse(node->right,d);
        traverse(node->left,d);
    }
    int maxDepth(TreeNode* root) {
        traverse(root,0);
        return ans;
    }
};