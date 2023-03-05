#include<iostream>
#include<math.h>
using namespace std;
int main (){
    int n;
    for(int j=1; j<=5; j++){
        cin>>n;
        cout<<"factor :- ";
        int factrl=1;
    for(int i=2; i<=n; i++){
         factrl=factrl*i;
         cout<<i<<"*";
    }
    cout<<"\nfactorial : "<<factrl<<endl;
    }
    return 0;
}