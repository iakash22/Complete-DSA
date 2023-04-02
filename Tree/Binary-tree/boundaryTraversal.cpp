#include<iostream>
#include<vector>
#include "binaryTree.h"
using namespace std;
void leftTraversal(node* root,vector<int> &ans){
    if((root == NULL) || root->left == NULL && root->right == NULL){
        return;
    }
    ans.push_back(root->data);
    if(root->left){
        leftTraversal(root->left, ans);
    }
    else{
        leftTraversal(root->right, ans);
    }
}
void leafTraversal(node* root, vector<int> &ans){
    if(root == NULL){
        return;
    }
    if(root->left == NULL && root->right == NULL){
        ans.push_back(root->data);
    }
    leafTraversal(root->left, ans);
    leafTraversal(root->right, ans);
} 
void rightTraversal(node *root, vector<int> &ans){
    if((root == NULL) || (root->left == NULL && root->right == NULL)){
        return;
    }
    if(root->right)
        rightTraversal(root->right, ans);
    else{
        rightTraversal(root->left, ans);
    }
    
    ans.push_back(root->data);
}
vector<int> boundaryTraversal(node* root){
    if(root == NULL){
        return {};
    }
    vector<int> ans;
    // Print first root node
    ans.push_back(root->data);

    // then Print left nodes
    leftTraversal(root->left, ans);

    // then print leaf int left subTree nodes
    leafTraversal(root->left, ans);

    // then print leaf int right subTree nodes
    leafTraversal(root->right, ans);

    // then print right nodes 
    rightTraversal(root->right, ans);

    return ans;
}

int main(){
    node *root;
    buildBinaryTree(root);
    for(auto x : boundaryTraversal(root)){
        cout<<x;
    }

    return 0;
}