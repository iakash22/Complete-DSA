#include<bits/stdc++.h>
using namespace std;
class Node{
    public: 
    int data;
    Node *left;
    Node *right;

    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};
Node *createInorderBst(vector<int>inorder,int st,int ed){
    if(st > ed){
        return NULL;
    }
    
    int mid = st + (ed-st)/2;
    int data = inorder[mid];
    Node *root = new Node(data);
    root->left = createInorderBst(inorder,st,mid-1);
    root->right = createInorderBst(inorder,mid+1,ed);

    return root;

}
void levelOrderTraversal(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node *temp = q.front();
        q.pop();
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}
int main(){
    vector<int> inorder{1,2,3,4,5,6};
    Node *root = createInorderBst(inorder,0,inorder.size()-1);
    levelOrderTraversal(root);
    return 0;
}