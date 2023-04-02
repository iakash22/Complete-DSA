#include<iostream>
#include "binaryTree.h"
using namespace std;
bool indenticalTreesOrSameTree(node *root1, node *root2){
    if(root1 == NULL && root2 == NULL){
        return true;
    }
    if((root1 != NULL && root2 == NULL) || (root1 == NULL && root2 != NULL)){
        return false;
    }
    bool left = indenticalTreesOrSameTree(root1->left,root2->left);
    bool right = indenticalTreesOrSameTree(root1->right, root2->right);

    return left && right;
}
int main(){


    return 0;
}