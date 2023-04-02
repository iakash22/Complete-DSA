#include<iostream>
#include "binaryTree.h"
// Time Complexity -> O(n^2)
bool checkTreeBalanced(node* root){
    if(root == NULL){
        return true;
    }
    bool leftCheck = checkTreeBalanced(root->left);
    bool rightCheck = checkTreeBalanced(root->right);
    bool diff = abs(heightOfTree(root->left) - heightOfTree(root->right)) <= 1;

    if(diff & leftCheck & rightCheck) return true;
    else return false;
}
// Time Complexity ->  O(N)
pair<bool,int> checkTreeBalancedFast(node* root){
    if(root == NULL){
        pair<bool, int>p = make_pair(1,0);
        return p;
    }

    pair<int,int> left = checkTreeBalancedFast(root->left);
    pair<int, int> right = checkTreeBalancedFast(root->right);

    bool leftCheck = left.first;
    bool rightCheck = right.first;
    bool diff = abs(left.second - right.second) <= 1;

    pair<bool,int> ans;
    ans.second = max(left.second, right.second) + 1;
    ans.first = (diff && leftCheck && rightCheck) ? true : false;
    return ans;
}
int main(){
    node *root;

    return 0;
}