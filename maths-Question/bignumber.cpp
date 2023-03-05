#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter three number :"<<endl;
    cin>>a>>b>>c;
    if (a>b)
    {
       if(a>c)
       cout<<"a is larger than b or c"<<endl;
       else
       cout<<"c is larger than a or b"<<endl;
    }
    else
    {
        if(b>c)
        cout<<"b is larger than a or b"<<endl;
        else
        cout<<"c is larger thsn a or b"<<endl;
    }
    return 0;
}