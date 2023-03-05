#include<iostream>
using namespace std;
int main(){
    string str = "ICANDOBOTH";
    cout<<str<<endl;

    // str.clear();
    if(empty(str)){
        cout<<"Empty string "<<endl;
    }
    else{    //(! empty(str))
        cout<<"String is not Empty "<<endl;
    }
return 0;
}