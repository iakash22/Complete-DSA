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
int main(){
    node* root;
    buildBinaryTree(root);
    // 1 2 3 -1 -1 4 5 6 -1 -1 -1 -1 7 8 -1 -1 -1
    print(root);
    cout<<"Height of tree : "<<heightOfTree(root);

    return 0;
}