#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
using namespace std;
class Node{
    public:
    int data;
    Node *left;
    Node *right;
    
    Node(int data){
        this->data = data;
        this->left = this->right = NULL;
    }
};
unordered_map<string,int> subtree;
string solve(Node *root,vector<Node *>ans){
    if(root == NULL) return "N";

    string curr = to_string(root->data);
    string ls = solve(root->left,ans); 
    string rs = solve(root->right,ans); 
    string s = curr + "," + ls + "," + rs;

    if(subtree.find(s) != subtree.end()){
        if(subtree[s] == 1){
            ans.push_back(root);
        }
        subtree[s]++;
    }
    else{
        subtree[s] = 1;
    }
    return s;
}
vector<Node *> findDuplicateSubtree(Node *root){
    if(root == NULL) return {};
    vector<Node *>ans;
    solve(root,ans);
}
int main(){
    Node *root = NULL;
    findDuplicateSubtree(root);

    return 0;
}
