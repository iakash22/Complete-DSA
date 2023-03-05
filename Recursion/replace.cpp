#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void replace2(string str){
    if(str.size() == 0){
        return;
    }

    if(str[0] == 'p' && str[1] == 'i'){
        cout<<"3.14";
        replace2(str.substr(2));
    }
    else{
        cout<<str[0];
        replace2(str.substr(1));
    }
}
int main(){
    // string str = "pippxxppiixipi";
    replace2("pippxxppiixipi");
    
    return 0;
}