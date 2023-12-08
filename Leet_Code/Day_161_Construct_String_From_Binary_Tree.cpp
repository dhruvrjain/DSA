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
    string s="";
    char t;
    void traverse(TreeNode* root){
        s+=to_string(root->val);
        if(root->right!=nullptr){
          s+='(';
          if(root->left!=nullptr){
              traverse(root->left);
          }
          s+=")(";
          traverse(root->right);
          s+=')';
        }
        else{
          if(root->left!=nullptr){
            s+='(';
            traverse(root->left);
            s+=')';
          }
        }
    }
    string tree2str(TreeNode* root) {
        traverse(root);
        return s;
    }
};