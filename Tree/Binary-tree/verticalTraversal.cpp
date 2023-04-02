#include<iostream>
#include<map>
#include<queue>
#include<vector>
#include "binaryTree.h"
using namespace std;
void verticalTraversal(node *root){
    map<int, map<int, vector<int> > > nodes;
    queue<pair<node*,pair<int,int> > > q;
    vector<vector<int> > ans;
    if(root == NULL) return ans;
    q.push(make_pair(root,make_pair(0,0)));

    while(!q.empty()){
        pair<node*, pair<int,int > > temp = q.front();
        node *front = temp.first;
        int hd = temp.second.first;
        int lvl = temp.second.second;
        q.pop();
        nodes[hd][lvl].push_back(front->data);
                
        if(front->left){
            q.push(make_pair(front->left, make_pair(hd-1,lvl+1)));
        }
        if(front->right){
            q.push(make_pair(front->right, make_pair(hd+1, lvl+1)));
        }
    }

    for(auto i : nodes){
        vector<int> temp;
        for(auto j : i.second){
            sort(j.second.begin(), j.second.end());
            for(auto val : j.second){
                temp.push_back(val);
            }
        }
        ans.push_back(temp);
    }
    return ans;
}
int main(){
    

    return 0;
}
vector<vector<int>> verticalTraversal(TreeNode* root) {
    
    vector<vector<int>>res;
    if(!root) return res;
    
    map <int , map <int,vector<int>>> mp;  //horizontalDist, level, node->data
    
    queue <pair<TreeNode*, pair<int,int>> > q;  //node, horizontalDist, level
    
    q.push({root,{0,0}});  //node, hd, lvl
    
    while(!q.empty()){
        
        auto f=q.front();
        q.pop();
        
        TreeNode* curr=f.first;      //curr node
        int hd=f.second.first;       //hd of curr node
        int lvl=f.second.second;     //lvl of curr node
        
        mp[hd][lvl].push_back(curr->val);     //pushing in map
        
        if(curr->left) q.push({curr->left,{hd-1,lvl+1}});      //check if curr->left exists or not
        if(curr->right) q.push({curr->right,{hd+1,lvl+1}});    //check if curr->right exists or not
    }
    
    
    //Retrieving Vertical Traversal
    for(auto i:mp){
        vector<int>ans;
        for(auto j:i.second){
            sort(j.second.begin(), j.second.end());
            for(auto k:j.second){
                ans.push_back(k);
            }
        }
        res.push_back(ans);
    }
            
    return res;
}