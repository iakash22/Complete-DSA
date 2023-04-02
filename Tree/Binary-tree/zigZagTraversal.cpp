#include<iostream>
#include<algorithm>
using namespace std;
#include "binaryTree.h"
void zigZagTraversal(node *root){
    if(root == NULL){
        return;
    }
    queue<node*> q;
    q.push(root);
    bool leftToRight = true; 
    while(!q.empty()){
        int size = q.size();
        vector<int> ans(size);
        for(int i=0; i<size; i++){
            node *front = q.front();
            q.pop();
            // if(leftToRight){
            //     ans[i] = front->data;
            // }
            // if(!leftToRight){
            //     ans[size - i - 1] = front->data;
            // }
            int index = leftToRight ? i : size - i - 1;
            ans[index] = front->data;
            ans[i] = front->data;
            if(front->left){
                q.push(front->left);
            }
            if(front->right){
                q.push(front->right);
            }
        }
        // if(!leftToRight){
        //     reverse(ans.begin(), ans.end());
        // }
        leftToRight = !leftToRight;
        for(auto i : ans){
            cout<<i<<" ";
        }
    }
}
int main(){
    node* root;
    buildBinaryTree(root);
    zigZagTraversal(root);

    return 0;
}