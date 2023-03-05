#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"enter the number : "<<endl;
    cin>>n;
    for(i=2;i<n;i++)
    {
        if(n%i == 0){
            cout<<"NOt PRIME NUMBER"<<endl;
             break;
        }
    }
    if(i == n)
    {
        cout<<"PRIME NUMBER";
    }
    return 0;
}