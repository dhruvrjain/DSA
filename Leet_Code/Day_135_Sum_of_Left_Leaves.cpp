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
    int sum=0;
    void add(TreeNode* root,bool f){
        if(!root) return;
        if(!(root->left) && !(root->right) && f)
        sum+=root->val;
        add(root->left,true);
        add(root->right,false);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        add(root->left,true);
        add(root->right,false);
        return sum;
    }
};