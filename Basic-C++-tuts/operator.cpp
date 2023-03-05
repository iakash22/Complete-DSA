#include<iostream>
using namespace std;
int main(){
    int i=1,j=2,k;
    k=i + j + i++ + j++ + ++i + ++j;
    cout<<i<< " "<<j<< " "<<k<<endl;
    int m=1;
    m=m++ - --m + ++m - m--;
    cout<<m; 
}