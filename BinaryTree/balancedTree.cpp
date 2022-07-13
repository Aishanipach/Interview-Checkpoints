class Solution {
public:
    bool isBalanced(TreeNode* root) {
        return dfsBalance(root)!=-1;
    }
       
      int dfsBalance(TreeNode* root){
          
          //base case
          if(root==NULL)return 0;
          
          int leftHeight=dfsBalance(root->left);
          if(leftHeight==-1) return -1;
          
          int rightHeight=dfsBalance(root->right);
          if(rightHeight==-1) return -1;
          
          if(abs(leftHeight-rightHeight)>1) return -1;
          return max(leftHeight,rightHeight)+1;
          
    }
};
