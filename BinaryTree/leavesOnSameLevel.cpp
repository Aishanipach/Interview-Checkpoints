/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */

int heightget(Tree* root, bool &flag){

    if(root==NULL){
        return 0;
    }

    int lHeight= heightget(root->left, flag);
    int rHeight = heightget(root->right, flag);

    if(lHeight && rHeight && lHeight!=rHeight){
        flag=1;
    }
    return 1+max(lHeight, rHeight);

}
bool solve(Tree* root) {
    
    bool flag=0;
    heightget(root, flag);

    return (!flag);
}



