#include<iostream>
using namespace std;
 //  Fayda == No extra Memory usage
 //  Greater than 3 inline Function not working 
inline int getmax(int &a,int &b){
    return (a>b) ? a : b;
}
int main(){
    int a =1 , b = 2;
    int ans = 0;

    ans = getmax(a,b);
    cout<< ans <<endl;

    a = a + 3;
    b = b +1;

    ans = getmax(a,b);
    cout<< ans <<endl;

    return 0;
}