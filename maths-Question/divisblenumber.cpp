#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"total number N : "<<endl;
    cin>>n;
    cout<<"Divisble number M : "<<endl;
    cin>>m;
    for(int i=0;i<=n;i++)
  {
      if(i%m == 0){
        continue;
      }
      cout<<i<<endl;
  } 
}

