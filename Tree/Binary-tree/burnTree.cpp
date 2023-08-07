#include<iostream>
#include<map>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node *left;
    node *right;

    node(int data){
        this->data = data;
        this->left = this->right = NULL;
    }
};
node *mappingNodeToParent(node* root,map<node*,node*> &nodeToParent,int target){
    queue<node *> q;
    q.push(root);
    node *res = NULL;
    nodeToParent[root] = NULL;
    while(!q.empty()){
        auto front = q.front();
        q.pop();

        if(front->data == target){
            res = front;
        }

        if(front->left){
            nodeToParent[front->left] = front;
            q.push(front->left);
        }
        if(front->right){
            nodeToParent[front->right] = front;
            q.push(front->right);
        }
    }
    return res;
}
int solve(node *root,map<node*,node*> &nodeToParent){
    map<node*,bool> visited;
    queue<node *>q;
    q.push(root);
    visited[root] = true;
    int ans = 0;

    while(!q.empty()){
        int size = q.size();
        bool flag = false;
        for(int i=0; i<size; i++){
            auto front = q.front();
            q.pop();

            if(front->left && !visited[front->left]){
                flag = true;
                visited[front->left] = true;
                q.push(front->left);
            }
            if(front->right && !visited[front->right]){
                flag = true;
                visited[front->right] = true;
                q.push(front->right);
            }
            if(nodeToParent[front] && !visited[nodeToParent[front]]){
                flag = true;
                visited[nodeToParent[front]] = true;
                q.push(nodeToParent[front]);
            }
        }
        if(flag == true){
            ans++;
        }
    }
    return ans;
}
int burnTree(node *root,int target){
    map<node*,node*>nodeToParent;
    node *targetNode = mappingNodeToParent(root,nodeToParent,target);
    int ans = solve(targetNode,nodeToParent);
    return ans;
}
int main(){
    node *root = NULL;
    int target = -1;
    cin>>target;
    int ans = burnTree(root,target);
    cout<<ans;

    return 0;
}