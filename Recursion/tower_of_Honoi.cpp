#include<iostream>
using namespace std;
void Tower_Honoi(int n,char src,char dest,char helper){
    if(n == 0){
        return;
    }

    Tower_Honoi(n-1,src,helper,dest);
    cout<<"Move From "<<src<<" To "<<dest<<endl;
    Tower_Honoi(n-1,helper,dest,src);
}
int main(){
    int n;
    cin>>n;
    char src = 'A',dest = 'C',helper = 'B';
    Tower_Honoi(n,src,dest,helper);

    return 0;
}