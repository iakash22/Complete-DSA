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
int solve(TreeNode *root,int k,int &i){
    if(root == NULL) return -1;

    int left = solve(root->left,k,i);
    if(left != -1){
        return left;
    }
    i++;
    if(i == k) return root->val;
    return solve(root->right,k,i);
}
int kthSmallest(TreeNode* root, int k) {
    int i = 0;
    int ans = solve(root,k,i);
    return ans;
}
int main(){
    TreeNode *root = NULL;


    return 0;
}