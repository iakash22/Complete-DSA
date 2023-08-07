#include<bits/stdc++.h>
using namespace std;
class Tree{
    public:
        int data;
        Tree *left;
        Tree *right;

        Tree(int val){
            this->data = val;
            left = NULL;
            right = NULL;
        }
};
int findIndex(vector<int> &inorder, int data){
    for(int i=0; i<inorder.size(); i++){
        if(data == inorder[i]) return i;
    }
    return -1;
}
Tree *inorderPreorderToMakeTree(vector<int> inorder,vector<int> preorder,int &preIndex,int st,int ed){
    if(inorder.size() < preIndex || st > ed){
        return NULL;
    }
    Tree *root = new Tree(preorder[preIndex++]);
    int index = findIndex(inorder,root->data);
    
    root->left = inorderPreorderToMakeTree(inorder,preorder,preIndex,st,index-1);
    root->right = inorderPreorderToMakeTree(inorder,preorder,preIndex,index+1,ed);

    return root;
}
int main(){


    return 0;
}