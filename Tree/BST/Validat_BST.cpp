#include<bits/stdc++.h>
using namespace std;
class TreeNode {
    public:
        int val;
        TreeNode *left;
        TreeNode *right;

        TreeNode(int val){
            this->val = val;
            left = right = NULL;
        }
};
// Time Complexity -> O(n)
// space Complexity -> O(n)
void solve(TreeNode *root,vector<int> &arr){
    if(root == NULL) return;
    solve(root->left,arr);
    arr.push_back(root->val);
    solve(root->right,arr);
}
bool isValidBST(TreeNode* root) {
    vector<int> arr;
    solve(root, arr);
    for(int i=1; i<arr.size(); i++){
        if(arr[i] <= arr[i-1])return false;
    }
    return true;
}

// Time Complexity -> O(n)
// space Complexity -> O(n)
bool solve(TreeNode *root,long int min,long int max){
        if(root == NULL) return true;
        if(min < root->val && root->val < max){
            return solve(root->left, min, root->val) && solve(root->right,root->val,max);
        }else{
            return false;
        }
    }
    bool isValidBST(TreeNode* root) {
        long int min = -21474836471;
        long int max = 21474836471;
        return solve(root,min,max);
    }
int main(){
    

    return 0;
}