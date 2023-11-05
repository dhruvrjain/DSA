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
    int t;
    bool isPossible(TreeNode* root,int currSum){
        currSum+=root->val;
        if(root->left==nullptr && root->right==NULL){
            if(currSum==t)
            return true;
            return false;
        }
        if((root->right && isPossible(root->right,currSum))||(root->left && isPossible(root->left,currSum))) return true;
        return false;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root) return false;
        t=targetSum;
        return isPossible(root,0);
    }
};