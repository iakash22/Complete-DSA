#include<iostream>
using namespace std;
class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val){
        this->val = val;
        left = right = NULL;
    }
};
int maxRoot(TreeNode* root){
    if(root == NULL) return -1;
    while(root->right){
        root = root->right;
    }
    return root->val;
}
TreeNode* deleteNode(TreeNode* root, int key) {
    if(root == NULL) return NULL;

    else if(root->val == key){
        if(root->left == NULL && root->right == NULL){
            return NULL;
        }
        else if(root->left != NULL && root->right == NULL){
            TreeNode* temp = root->left;
            delete root;
            return temp;
        }
        else if(root->left == NULL && root->right != NULL){
            TreeNode *temp = root->right;
            delete root;
            return temp;
        }
        else{
            int maxValue = maxRoot(root->left);
            root->val = maxValue;
            root->left = deleteNode(root->left,maxValue);
            return root;
        }
    }
    else if(root->val > key){
        root->left = deleteNode(root->left,key);
    }
    else{
        root->right = deleteNode(root->right,key);
    }
    return root;
}
int main(){
    TreeNode* root = NULL;


    return ;
}
