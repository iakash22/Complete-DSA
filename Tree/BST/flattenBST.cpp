#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node *left;
        Node *right;

        Node(int data){
            this->data = data;
            this->left = NULL;
            this->right = NULL;
        }
};
void solve(Node *root, Node *&prev){
    if(root == NULL) return;
    solve(root->left, prev);
    prev->right = root;
    prev->left = NULL;
    prev = root;
    prev = root;
    solve(root->right,prev);
}
Node *flattenBST(Node *root){
    Node *prev = new Node(-1);
    solve(root,prev);
    return prev->right;
}
int main(){
    Node *root = NULL;
    
    Node *rootLL = flattenBST(root);
    
    return 0;
}