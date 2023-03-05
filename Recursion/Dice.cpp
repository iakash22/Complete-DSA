#include<bits/stdc++.h>
using namespace std;
  //  Combination Question
void dice(string empty, int target){
    if(target == 0){
        cout<<empty<<endl;
        return;
    }

    for(int i=1; i<=6 && i<=target; i++){
        dice(empty + to_string(i), target-i);
    }
}
int main(){
    int target = 5;
    dice("",target);

return 0;
}