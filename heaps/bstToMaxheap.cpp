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
void postOrder(BST *root,vector<int> &arr,int &i){
    if(!root) return;
    postOrder(root->left,arr,i);
    postOrder(root->right,arr,i);
    root->data = arr[i++];
}
void convertToMaxHeapUtil(BST* root)
{
    vector<int> arr;
    inOrder(root,arr);
    int i = 0;
    postOrder(root,arr,i);
}
int main(){
    BST *root = NULL;

    // Create a BST 
    solve(root);

    //
    convertToMaxHeapUtil(root);


    return 0;
}