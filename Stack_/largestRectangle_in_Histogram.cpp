#include<bits/stdc++.h>
using namespace std;

vector<int> prevSmallerElement(vector<int> arr,int n){
    stack<int> st;
    st.push(-1);
    vector<int> prev(n);
    for(int i=0; i<n; i++){
        while(st.top() != -1 && arr[st.top()] >= arr[i]){
            st.pop();
        }
        prev[i] = st.top();
        st.push(i);
    }
    return prev;
}
vector<int> nextSmallerElement(vector<int> arr,int n){
    stack<int> st;
    st.push(-1);
    vector<int> next(n);
    for(int i=n-1; i>=0; i--){
        while(st.top() != -1 && arr[st.top()] >= arr[i]){
            st.pop();
        }
        next[i] = st.top();
        st.push(i);
    }
    return next;
}
int largestRectangleArea(vector<int>& heights) {
    int n = heights.size();
    vector<int> next;
    next = nextSmallerElement(heights,n);
    vector<int> prev;
    prev = prevSmallerElement(heights,n);
    int area = INT_MIN;
    for(int i=0; i<n; i++){
        int l = heights[i];
        if(next[i] == -1){
            next[i] = n;
        }
        int b = next[i] - prev[i] - 1;
        int tempArea = l*b;
        area = max(tempArea,area);
    }
    return area;
}

int main(){
    vector<int> height{1,5,2,4,8};
    int ans = largestRectangleArea(height);
    cout<<ans<<endl;


    return 0;
}