#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *left;
    node *right;


    node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
int minBST(node *root){
    if(root == NULL) return -1;

    while(root->left){
        root = root->left;
    }
    return root->data;
}
int maxBST(node *root){
    if(root == NULL) return -1;

    while(root->right){
        root = root->right;
    }
    return root->data;
}
int main(){
    node *root = NULL;
    int maxAns = maxBST(root);
    int minAns = minBST(root);
    return 0;
}