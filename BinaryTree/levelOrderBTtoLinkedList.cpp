LLNode* solve(Tree* root) {
    if(root == NULL)
        return new LLNode();
    queue<Tree*> trav;
    trav.push(root);
    LLNode* node = new LLNode();
    LLNode* ans = node;
    LLNode* prv;
    while(!trav.empty())
    {
        Tree* exp = trav.front();
        trav.pop();
        if(exp->left != NULL)
            trav.push(exp->left);
        if(exp->right != NULL)
            trav.push(exp->right);
        node->val = exp->val;
        node->next = new LLNode();
        prv = node;
        node = node->next;
    }
    prv->next = NULL;
    return ans;
    
}
