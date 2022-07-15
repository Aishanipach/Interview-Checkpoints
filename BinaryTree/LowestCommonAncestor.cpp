

class Solution {
public:
    
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
                
        if(root==NULL || root==p|| root==q)
            return root;
        
        TreeNode* leftq= lowestCommonAncestor(root->left, p,q);
        TreeNode* rightq= lowestCommonAncestor(root->right, p, q);
      
        if(leftq==NULL)
            return rightq;
        
       else if(rightq==NULL)
            return leftq;
        
        
       else
           return root;
        
        
    }
    
};
