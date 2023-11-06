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
    vector<vector<int>> ans;
    int t;
    void isPossible(TreeNode* root, int currSum,vector<int> path){
        currSum+=root->val;
        path.push_back(root->val);
        if(root->left==NULL && root->right==NULL){
            if(currSum==t){
                ans.push_back(path);
                return;
            }
            return;
        }
        if(root->right){
            isPossible(root->right,currSum,path);
        }
        if(root->left)
        isPossible(root->left,currSum,path);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        if(!root) return {};
        t=targetSum;
        isPossible(root,0,{});
        return ans;
    }
};