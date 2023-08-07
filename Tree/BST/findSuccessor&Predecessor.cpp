#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node *left;
    Node *right;

    Node(int data){
        this->data = data;
        this->left = this->right = NULL;        
    }
};
int minAns(Node *root){
    if(root == NULL) return -1;

    while(root){
        root = root->left;
    }
    return root->data;
}
int maxAns(Node *root){
    if(root == NULL){
        return -1;
    }

    while(root){
        root = root->right;
    }
    return root->data;
}
Node* find(Node *root,int successor){
    if(root == NULL) return NULL;
    if(root->data == successor){
        return root;
    }

    if(root->data > successor){
        return find(root->left,successor);
    }
    else{
        return find(root->right,successor);
    }
}
int findSuccesor(Node *root,int successor){
    if(root == NULL){
        return NULL;
    }
    Node *succ = find(root,successor);
    if(succ == NULL) return -1;
    int ans = maxAns(root->right);
    return ans;
}
int findPredecessor(Node *root,int predecessor){
    if(root == NULL){
        return NULL;
    }
    Node *pre = find(root,predecessor);
    if(pre == NULL) return -1;
    int ans = minAns(root->right);
    return ans;
}
int main(){
    Node *root = NULL;

    return 0;
}