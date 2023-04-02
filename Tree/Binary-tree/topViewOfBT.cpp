#include<iostream>
#include "binaryTree.h"
#include<map>
using namespace std;
vector<int> topViewBT(node *root){
    vector<int> ans;
    if(root == NULL){
        return ans;
    }
    map<int,int> topNode;
    queue<pair<node*, int> > q;
    q.push({root,0});
    while(!q.empty()){
        auto temp = q.front();
        node *front = temp.first;
        int hd = temp.second;
        q.pop();

        if(topNode.find(hd) == topNode.end()){
            topNode[hd] = front->data;
        }

        if(front->left){
            q.push({front->left,hd-1});
        }
        if(front->right){
            q.push({front->right,hd+1});
        }
    }
    for(auto val : topNode){
        ans.push_back(val.second);
    }
    return ans;
}
int main(){


    return 0;
}