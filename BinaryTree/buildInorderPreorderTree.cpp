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
//  struct TreeNode * newNode(int data) {
//   struct TreeNode * TreeNode = (struct TreeNode * ) malloc(sizeof(struct TreeNode));
//   TreeNode -> val = data;
//   TreeNode -> left = nullptr;
//   TreeNode -> right = nullptr;

//   return (TreeNode);
// }   
    unordered_map <int,int> mp;
   TreeNode* fromPreToIn(vector<int>& pre,vector<int>& in,int &preInd,int inStart,int inEnd)
{
    if(preInd == pre.size() || inStart > inEnd)
    {
        return NULL;
    }
    
    int ele = pre[preInd++];
    int pos = mp[ele];
    TreeNode* root = new TreeNode(ele);
    
    root->left = fromPreToIn(pre,in,preInd,inStart,pos-1);
    root->right = fromPreToIn(pre,in,preInd,pos+1,inEnd);
    
    return root;
}

TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
    for(int i=0;i<inorder.size();i++)
    {
        mp[inorder[i]] = i;
    }
    int index=0;
    TreeNode* ans = fromPreToIn(preorder,inorder,index,0,inorder.size());
    
    return ans;
}
};
