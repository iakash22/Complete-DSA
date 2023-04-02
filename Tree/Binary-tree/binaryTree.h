#include<iostream>
#include<queue>
#include<stack>
using namespace std;
class node{
    public:
        int data;
        node* left;
        node* right;

        node(int data){
            this->data = data;
            this->left = this->right = NULL;
        }
};

node* buildBinaryTree(node* &root){
    cout<<"enter the data : "<<endl;
    int data;
    cin>>data;
    root = new node(data);

    if(data == -1) return NULL;

    cout<<"enter data for inserting in left of "<< data <<endl;
    root->left = buildBinaryTree(root->left);

    cout<<"enter data for inserting in right of "<< data <<endl;
    root->right = buildBinaryTree(root->right);

    return root;
}

node* buildFromLevelOrder(node* &root){
    queue<node*>q;
    cout<<"enter the data : "<<endl;
    int data;
    cin>>data;
    root = new node(data);
    q.push(root);
    while(!q.empty()){
        node *temp = q.front();
        q.pop();
        cout<<"enter data for inserting in left of "<<temp->data<<endl;
        int leftData;
        cin>>leftData;

        if(leftData != -1){
            temp->left = new node(leftData);
            q.push(temp->left);
        }
        cout<<"enter data for inserting in right of "<<temp->data<<endl;
        int rightData;
        cin>>rightData;

        if(rightData != -1){
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
    return root;
}

void print(node* root){
    if(root == NULL) return;
    cout<<root->data<<endl;
    if(root->left == NULL){
        cout<<"left of "<<root->data<<" - > NULL";
    }
    else{
        cout<<"left of "<<root->data<<" - > ";
    }
    print(root->left);
    cout<<endl;
    if(root->right == NULL){
        cout<<"right of "<<root->data<<" - > NULL";
    }
    else{
        cout<<"right of "<<root->data<<" - > ";
    }
    print(root->right);
    cout<<endl;
}

void levelOrderTraversal(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node *temp = q.front();
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

void inOrderTraversal(node *root){
    if(root == NULL) return;
    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);
}

void preOrderTraversal(node *root){
    if(root == NULL) return;
    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void postOrderTraversal(node *root){
    if(root == NULL) return;
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" ";
}

void preOrderTraversal_Itrative(node *root){
    if(root == NULL) return;
    stack<node*>st;
    st.push(root);
    while(!st.empty()){
        node* temp = st.top();
        cout<<temp->data<<" ";
        st.pop();
        if(temp->right){
            st.push(temp->right);
        }
        if(temp->left){
            st.push(temp->left);
        }
    }
}
int heightOfTree(node *root){
    if(root == NULL){
        return 0;
    }
    int left = heightOfTree(root->left);
    int right = heightOfTree(root->right);

    int ans = max(left,right)+1;
    return ans;
}
// int main(){
//     node* root = NULL;
//     buildBinaryTree(root);
//     // 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
//     // buildFromLevelOrder(root);
//     // 1 2 3 4 5 6 7 -1 -1 -1 -1 -1 -1 -1 -1
//     // print(root);
//     // levelOrderTraversal(root);
//     cout<<"INORDER_TRAVERSAL ";
//     inOrderTraversal(root);
//     cout<<endl;

//     cout<<"PREORDER_TRAVERSAL_Itrative ";
//     preOrderTraversal_Itrative(root);
//     cout<<endl;

//     cout<<"PREORDER_TRAVERSAL ";
//     preOrderTraversal(root);
//     cout<<endl;

//     cout<<"POSTORDER_TRAVERSAL ";
//     postOrderTraversal(root);
//     // cout<<endl;

//     return 0;
// }