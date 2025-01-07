///**
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
void inorder(TreeNode* root, int k, int &counter, int &kSmallestValue) {
        if(!root ) return;
        inorder(root->left, k, counter, kSmallestValue);
        
        counter++;
         if (counter == k) {
            kSmallestValue = root->val;
            return;
        }
        inorder(root->right, k, counter, kSmallestValue);
    }
    int kthSmallest(TreeNode* root, int k) {
       int counter=0;
       int kSmallestValue= INT_MIN;
       
     inorder(root, k, counter, kSmallestValue);
        return  kSmallestValue;
    }
};
