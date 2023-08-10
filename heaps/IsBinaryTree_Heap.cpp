#include<bits/stdc++.h>
#include"../Tree/Binary-tree/binaryTree.h"
using namespace std;
int countNode(node *root){
    if(root == NULL) return 0;
    return 1 + countNode(root->left) + countNode(root->right);
}
bool isCompleteTree(node *root,int i,int numberOfNodes){
    if(root == NULL) return true;

    if(i >= numberOfNodes){
        return false;
    }
    
    bool left = isCompleteTree(root->left, i*2+1, numberOfNodes);
    bool right = isCompleteTree(root->right, i*2+2, numberOfNodes);

    return left && right;


}
pair<int,bool> solve(node *root){
    if(root == NULL){
        return {INT_MIN,true};
    }
    
    if(root->left == NULL && root->right == NULL){
        return {root->data,true};
    }
    
    pair<int,bool> left = solve(root->left);
    pair<int,bool> right = solve(root->right);
    
    if(left.first < root->data && right.first < root->data && left.second && right.second){
        return {root->data,true};
    }
    else
        return {-1,false};
}
void isBinaryTreeHeap(node *root){
    int numberOfNodes = countNode(root);
    if(isCompleteTree(root,0,numberOfNodes) && solve(root).second) 
        cout<<"Tree is Complete Binary tree and Heap"<<endl;
    else
        cout<<"Tree is not Complete Binary tree and Heap"<<endl;
}
int main(){
    node *root = NULL;
    buildBinaryTree(root);
    print(root);
    levelOrderTraversal(root);
    
    isBinaryTreeHeap(root);

    return 0;
}
// 8 7 -1 -1 6 5 -1 -1 4 -1 -1
// 8 7 5 -1 -1 4 -1 -1 6 -1 -1