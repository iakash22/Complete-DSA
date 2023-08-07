#include<bits/stdc++.h>
using namespace std;
class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val){
        this->val = val;
        left = right = NULL;
    }
};
TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    if(root == NULL){
        return NULL;
    }
    if(root->val > p->val && root->val > q->val){
        return lowestCommonAncestor(root->left,p,q);
    }
    if(root->val < p->val && root->val < q->val){
        return lowestCommonAncestor(root->right,p,q);
    }
    return root;
}
int main(){
    TreeNode *root = NULL;


    return 0;
}