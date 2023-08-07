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
vector<int> morishTraversal(tree *root){
    if(root == NULL) return {};

    vector<int> ans;
    tree *curr = root;
    while(curr != NULL){
        if(curr->left == NULL){
            ans.push_back(curr->data);
            curr = curr->right;
        }
        else{
            tree *pre = curr->left;
            while(pre != NULL && pre->right != curr){
                pre = pre->right;
            }

            if(pre->right == NULL){
                pre->right = curr;
                curr = curr->left; 
            }
            else{
                pre->right = NULL;
                ans.push_back(curr->data);
                curr = curr->right;
            }
        }
    }
}
int main(){
    tree *root;
    vector<int> ans = morishTraversal(root);    


    return 0;
}