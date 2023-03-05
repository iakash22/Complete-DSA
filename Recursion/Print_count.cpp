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
    int n;
    cin>>n;
    cout<<endl;
    Count(n);

    return 0;
}