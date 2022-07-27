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
    
    TreeNode* findrightmost(TreeNode* root){
        
        if(root->right==NULL)
            return root;
        
        return findrightmost(root->right);
            
    }
    void flatten(TreeNode* root) {
       
        if(root==NULL)
            return;
        
        TreeNode* rightmost;
        TreeNode* tempright;
           while(root){ 
            if(root->left){
                rightmost=findrightmost(root->left);
                tempright=root->right;
                root->right=root->left;
                root->left=NULL;
                rightmost->right=tempright;
                
            }
               root=root->right;
    }
    }
};
