#include<iostream>
using namespace std;
int main()
{
    float r,h,area;
    cin>>r>>h;
    cout<<"enter radius :" <<r<<"\nenter hight :" <<h<<endl;
    area=2*3.14*r*(r+h);
    cout<<"Area of Cylinder :" <<area;
    return 0;
}