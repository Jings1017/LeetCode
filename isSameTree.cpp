class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == NULL)
            return q == NULL;
        if(q == NULL)
            return p == NULL;
        if(p->val == q->val)
            return isSameTree(p->left , q->left) && isSameTree(p->right , q->right);
        return false;
    }
};