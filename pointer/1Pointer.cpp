#include<bits/stdc++.h>
using namespace std;
void update(int *a,int *b){
    int c = *a;
    *a = *a + *b;
    *b = fabs(c - *b);
    cout<<*a<<endl<<*b<<endl;
}
int main(){
    int a,b;
    int* pa=&a, * pb=&b;
    cin>>*pa>>*pb;
    update(pa,pb);
}