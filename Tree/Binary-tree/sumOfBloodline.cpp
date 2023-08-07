#include<bits/stdc++.h>
using namespace std;
class tree{
    public:
        int data;
        tree *left;
        tree *right;

        tree(int data){
            this->data = data;
            this->left = NULL;
            this->right = NULL;
        }
};
pair<int,int> solve(tree *root){
    if(root == NULL){
        return {0,0};
    }

    // first in tree nodes height and second in sum of nodes 
    auto left = solve(root->left);
    auto right = solve(root->right);

    int sum = root->data;

    if(left.first == right.first){
        sum += max(left.second, right.second);
    }
    else if(left.first > right.first){
        sum += left.second;
    }
    else{
        sum += right.second;
    }

    return {max(left.first, right.second)+1,sum};
}
int sumofLongestLeafPath(tree *root){
    auto ans  = solve(root);
    return ans.second;
}
int main(){
    tree *root;
    int ans = sumofLongestLeafPath(root);

    return 0;
}
