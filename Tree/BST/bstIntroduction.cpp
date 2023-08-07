#include<iostream>
#include<queue>
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
    int data;
    cin>>data;
    while(data != -1){
        root = createBST(root,data);
        cin>>data;
    }
}
void lavelOrderTraversal(BST *root){
    if(root == NULL) return;
    queue<BST *>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        BST *front = q.front();
        q.pop();
        if(front == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<front->data<<" ";
            if(front->left){
                q.push(front->left);
            }
            if(front->right){
                q.push(front->right);
            }
        }
    }
}
int main(){
    BST *root = NULL;
    solve(root);
    lavelOrderTraversal(root);
    return 0;
}