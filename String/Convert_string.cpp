#include<iostream>
using namespace std;
int main(){
    string str = "aknbjbjbvbv";
    // cout<<'a' - 'A';
    // convert uppercase
    for(int i=0; i<str.length(); i++){
        if(str[i]>= 'a' && str[i] <= 'z'){
            str[i]-=32;
        }
    }
    cout<<"Uppercase convert :: ";
    cout<<str<<endl;
    //convert lowercase
    for(int i=0; i<str.length(); i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i]+=32;
        }
    }
    cout<<"Lowercase Convert :: ";
    cout<<str;

    return 0;
}