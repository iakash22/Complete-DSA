#include<iostream>
#include<queue>
#include<vector>
using namespace std;
class info{
    public:
        int data;
        int col;
        int row;

        info(int data,int r,int c){
            this->data = data;
            this->row = r;
            this->col = c;
        }
};
class compare{
    public:
        bool operator()(info *a,info *b){
            return a->data > b->data;
        }
};
vector<int> mergeKArray(int arr[][4], int n,int k){
    priority_queue<info*,vector<info*>, compare >minHeap;
    vector<int> ans;
    for(int i=0; i<k; i++){
        info *temp = new info(arr[i][0], i,0);
        minHeap.push(temp);
    }

    while(!minHeap.empty()){
        info *temp = minHeap.top();
        minHeap.pop();

        int data = temp->data;
        int col = temp->col;
        int row = temp->row;

        ans.push_back(data);

        if(col+1 < n){
            info *newInfo = new info(arr[row][col+1],row,col+1);
            minHeap.push(newInfo);
        }
    }

    return ans;
}
int main(){
    int arr[][4] = {
        {1,3,5,7},
        {2,4,6,8},
        {9,10,11,12}
    };

    int k = 3;
    vector<int> ans = mergeKArray(arr,4,k);
    
    for(auto val : ans){
        cout<<val<< " ";
    }
    cout<<endl;

    return 0;
}