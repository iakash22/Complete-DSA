#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> nextSmaller(vector<int> &v){
    vector<int> ans(v.size());
    stack<int> st;
    st.push(-1);

    for(int i=v.size()-1; i>=0; i--){
        while(st.top() >= v[i]){
            st.pop();
        }
        ans[i] = st.top();
        st.push(v[i]);
    }

    return ans;
}
int main(){
    vector<int> v{1,2,0,1,5,2};
    
    for(auto val : nextSmaller(v)){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}
