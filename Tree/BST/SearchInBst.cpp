#include<iostream>
using namespace std;
class tree{
    public:
    int data;
    tree *left;
    tree *right;

    tree(int data){
        this->data = data;
        this->left = this->right = NULL;
    }
};
tree *serchInBST(tree *root,int target){
    if(root == NULL) return NULL;

    if(root->data == target) return root;

    if(root->data > target){
        return serchInBST(root->left, target);
    }
    else{
        return serchInBST(root,target);
    }
}
int main(){
    tree *root = NULL;
    int target = -1;
    cin>>target;

    tree *ans = serchInBST(root,target);
    cout<<ans<<endl;
    
    return 0;
}