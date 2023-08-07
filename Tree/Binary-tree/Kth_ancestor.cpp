#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Tree{
    public:
        int data;
        Tree *left;
        Tree *right;

        Tree(int data){
            this->data = data;
            left = NULL;
            right = NULL;
        }
};
Tree *solve(Tree *root, int target, int &k){
    if(root == NULL) return NULL;
    
    if(root->data == target) return root;
    Tree *left = solve(root->left,target, k);
    Tree *right = solve(root->right,target,k);

    if(left  != NULL && right == NULL){
        k--;
        if(k <= 0){
            k = INT_MAX;
            return root;
        }
        return left;
    }
    if(right != NULL && left == NULL){
        k--;
        if(k<= 0){
            k = INT_MAX;
            return root;
        }
        return right;
    }
    return NULL;
}
int kthAncestor(Tree *root, int target, int k){
    if(root == NULL) return -1;
    Tree *ans = solve(root, target, k);
    return ans->data;
}
bool solve(Tree* root,int node,vector<int> &ans){
    if(root == NULL){
        return false;
    }
    if(root->data == node){
        return true;
    }
    
    bool left = solve(root->left,node,ans);
    bool right = solve(root->right,node,ans);
    
    if(left){
        ans.push_back(root->data);
    }
    if(right){
        ans.push_back(root->data);
    }
    return left || right;
}
int kthAncestor(Tree *root, int k, int node)
{
    // Code here
    vector<int> ans;
    solve(root,node,ans);
    if(ans.size() < k) return -1;
    return ans[k-1];
}
int main(){
    Tree *root = NULL;
    int target = 5;
    int k = 2;
    int ans = kthAncestor(root, target, k);

    return ;
}