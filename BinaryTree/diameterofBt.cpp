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
    int ans=0;
    public:
    int heightfind(TreeNode* root){
        
        if(root==NULL){
            return 0;
            
        }
        
        int lft=heightfind(root->left);
        int rgt=heightfind(root->right);
        ans=max(ans,lft+rgt);
        
        return 1+max(lft, rgt);
        
            
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        
        heightfind(root);
        
        return ans;
        
        
    }
};

