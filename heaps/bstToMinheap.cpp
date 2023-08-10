#include<iostream>
#include<vector>
using namespace std;
class BST{
    public:
        int data;
        BST *left;
        BST *right;

        BST(int data){
            this->data = data;
            this->left = NULL;
            this->right = NULL;
        }
};
BST* createBST(BST *root,int data){
    if(root == NULL){
        root = new BST(data);
        return root;
    }

    if(root->data < data){
        root->left = createBST(root->left,data);
    }
    else{
        root->right = createBST(root->right, data);
    }
    return root;
}
void solve(BST * &root){

    // user input data 
    int data;
    cin>>data;

    while(data != -1){
        root = createBST(root,data);
        cin>>data;
    }
}
void inOrder(BST *root,vector<int> &arr){
    if(!root) return;
    inOrder(root->left,arr);
    arr.push_back(root->data);
    inOrder(root->right,arr);
}
void preOrder(BST *root,vector<int> &arr,int &i){
    if(!root) return;
    root->data = arr[i++];
    preOrder(root->left,arr,i);
    preOrder(root->right,arr,i);
}
void convertToMinHeapUtil(BST* root)
{
    vector<int> arr;
    inOrder(root,arr);
    int i = 0;
    preOrder(root,arr,i);
}
int main(){
    BST *root = NULL;

    // Create a BST 
    solve(root);

    //
    convertToMinHeapUtil(root);


    return 0;
}