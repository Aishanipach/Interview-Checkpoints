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


//Morris traversal simply is to make a connection of rightmost leaf to root to travel back.




class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        
        
        TreeNode* node=root;
        vector<int> ans;
        
       while(node!=NULL){
           
           if(node->left==NULL){
               ans.push_back(node->val);
               node=node->right;
           }
           
           else{
               
               TreeNode* prev=node->left;
               
               while(prev->right && prev->right!=node){
                   prev=prev->right;
               }
               
               if(prev->right==NULL){
                   prev->right=node;
                   
                   node=node->left;
               }
               
               else{
                   prev->right=NULL;
                   ans.push_back(node->val);
                   node=node->right;
               }
           }
       }
        
        return ans;
    }
};

