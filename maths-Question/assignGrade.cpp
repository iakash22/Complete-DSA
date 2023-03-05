#include<iostream>
using namespace std;
int main()
{
    int marks;
    for(int i=0;i<3;++i)
    {
    cout<<"enter your marks :"<<endl;
    cin>>marks;
    if (marks>=80)
    cout<<"A"<<endl;
    else if (marks>=60)
    cout<<"B"<<endl;
    else if (marks>=33)
    cout<<"C"<<endl;
    else
    cout<<"fail"<<endl;
    }
    return 0;
}