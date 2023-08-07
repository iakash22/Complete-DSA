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
void inorderTraversal(Node *root, vector<int>& inorder){
    if(root == NULL){
        return;
    }

    inorderTraversal(root->left,inorder);
    inorder.push_back(root->data);
    inorderTraversal(root->right,inorder);
}
bool twoSumBst(Node *root,int target){
    vector<int> inorder;
    inorderTraversal(root,inorder);
    
    int st = 0;
    int ed = inorder.size()-1;
    while(st < ed){
        int sum = inorder[st] + inorder[ed];
        if(sum == target){
            return true;
        }
        if(sum < target){
            st++;
        }
        else{
            ed--;
        }
    }
    return false;
}
int main(){
    Node *root = NULL;
    int target = -1;
    cin>> target;
    bool ans = twoSumBst(root,target);

    if(ans == true){
        cout<<"sum is available in BST"<<endl;
    }
    else{
        cout<<"sum is not available in BST"<<endl;
    }
    
    return 0;
}