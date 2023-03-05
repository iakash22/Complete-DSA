#include<bits/stdc++.h>
#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> s;

    s.push("love");
    s.push("THAnOS");
    s.push("KING");

    cout<<"Top Element-->> " <<s.top()<<endl;

    s.pop();
    cout<<"Top Element-->> "<<s.top()<<endl;

    cout<<"Size of Stack-->> "<<s.size()<<endl;

    cout<<"Empty or not-->> "<<s.empty()<<endl;
    return 0;
}
