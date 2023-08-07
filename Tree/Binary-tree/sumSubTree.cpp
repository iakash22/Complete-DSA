#include<iostream>
#include "binaryTree.h"
using namespace std;
pair<bool,int> solve(node* root){

    if(root == NULL){
        pair<bool,int> p = make_pair(true,0);
        return p;
    }

    if(root->left == NULL && root->right == NULL){
        pair<bool,int> p = make_pair(true,root->data);
        return p;
    }

    pair<bool,int> left = solve(root->left);
    pair<bool,int> right = solve(root->right);

    bool leftCheck = left.first;
    bool rightCheck = right.first;
    bool sumCheck = root->data == left.second + right.second;

    pair<bool,int> ans;
    if(leftCheck && rightCheck && sumCheck){
        ans.first = true;
        ans.second = 2*root->data;   // root->data + left.second + right.second;
    }

    else{
        ans.first = false;
    }
    return ans;
}
bool isSumSubTree(node* root){
    return solve(root).first;
}
int main(){

    return ;
}

