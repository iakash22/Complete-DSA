#include <iostream>
#include<cstdio>
#include<iomanip>
using namespace std;
int main() {
    int u;
    long int b;
    char v;
    float e;
    double l;
    cin>>u>>b>>v>>e>>l;
    cout<<u<<"\n"<<b<<"\n"<<v<<endl;
    cout<< std::fixed<<setprecision(3)<<e<<endl;
    cout<< std::fixed<<setprecision(9)<<l<<endl;
    return 0;
}
 