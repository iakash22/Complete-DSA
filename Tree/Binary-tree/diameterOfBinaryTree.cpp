#include<iostream>
#include "binaryTree.h"
using namespace std;

int heightOfTree(node *root){
    if(root == NULL){
        return 0;
    }
    int left = heightOfTree(root->left);
    int right = heightOfTree(root->right);

    int ans = max(left,right)+1;
    return ans;
}

// time Complexity -> O(n^2)
int diameterofTree(node *root){
    if(root == NULL) return 0;
    int leftCheck = diameterofTree(root->left);
    int rightCheck = diameterofTree(root->right);
    int bothCheck = heightOfTree(root->left) + heightOfTree(root->right) + 1;
    int ans = max(bothCheck, max(rightCheck,leftCheck));
    return ans;
}

// time Complexity -> O(n)
pair<int,int> diameterFast(node *root){
    if(root == NULL){
        pair<int,int> p = make_pair(0,0);
        return p;
    }

    pair<int,int> left = diameterFast(root->left);
    pair<int,int> right = diameterFast(root->right);

    int op1 = left.first;
    int op2 = right.first;
    int op3 = left.second + right.second + 1;

    pair<int,int> ans;
    ans.first = max(op3, max(op1, op2));
    ans.second = max(left.second, right.second) + 1;

    return ans;
}
int main(){
    node *root;
    buildBinaryTree(root);
    cout<<diameterofTree(root);
    int diameter = diameterFast(root).first;
    return 0;
}