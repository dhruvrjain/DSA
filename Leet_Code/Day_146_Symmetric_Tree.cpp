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
    bool isSameRev(TreeNode* l,TreeNode* r){
        if(!l && !r) return true;
        if(l && r && l->val==r->val){
            return (isSameRev(l->left,r->right) && isSameRev(l->right,r->left));
        }
        return false;
    }
    bool isSymmetric(TreeNode* root) {
        if(isSameRev(root->left,root->right)) return true;
        return false;
    }
};