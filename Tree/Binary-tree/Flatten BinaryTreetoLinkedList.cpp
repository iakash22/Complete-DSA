#include<bits/stdc++.h>
using namespace std;
class tree{
    public:
        int data;
        tree *left;
        tree *right;

        tree(int data){
            this->data = data;
            this->left = NULL;
            this->right = NULL;
        }
};
void flatten(tree* root) {
    if(root == NULL) return;
    tree* curr = root;

    while(curr){
        if(curr->left != NULL){
            tree* pre = curr->left;
            while(pre->right){
                pre = pre->right;
            }
            pre->right = curr->right;
            curr->right = curr->left;
            curr->left = NULL;
        }
        curr = curr->right;
    }
}
int main(){
    tree *root;
    flatten(root);
    return;
}