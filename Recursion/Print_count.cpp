#include<iostream>
using namespace std;
void Count(int n){
    // Base Condition
    if(n == 0){
        return ;
    }
    /* // Tail Recursion

    // Processing
    cout<<n<<endl;

    // Rcursive Relation
    Count(n-1);  */


    /* // Head Recursion

    // Rcursive Relation
    Count(n-1);

    // Processing
    cout<<n<<endl; */
}
int main(){
    // int n;
    // cin>>n;
    // cout<<endl;
    // Count(n);

    string str = "dabschdhg";
    int f = str.find("abc");
    if(str.find("abc") < str.length()){
        cout<<"i ma here"<<endl;
    }
    cout<<f;
    return 0;
}