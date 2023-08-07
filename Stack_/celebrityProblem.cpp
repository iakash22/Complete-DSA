#include<bits/stdc++.h>
using namespace std;
int findCelebrity(vector<vector<int> > &arr){
    if(arr.empty()) return -1;
    stack<int> st;
    for(int i=0; i<arr.size(); i++){
        st.push(i);
    }
    while(st.size() != 1){
        int a = st.top();
        st.pop();
        int b = st.top();
        st.pop();

        if(arr[a][b]){
            st.push(b);
        }
        else{
            st.push(a);
        }
    }

    int mightbeCelebrity = st.top();
    for(int i=0; i<arr.size(); i++){
        if(arr[mightbeCelebrity][i] != 0){
            return -1;
        }
    }
    for(int i=0; i<arr.size(); i++){
        if(arr[i][mightbeCelebrity] != 1 && i != mightbeCelebrity){
            return -1;
        }
    }
    return mightbeCelebrity;
}
int main(){
    vector<vector<int > > arr  {{0,0,0},
                                {0,1,0},
                                {1,0,0}};
    cout<<findCelebrity(arr)<<endl;

    return 0;
}