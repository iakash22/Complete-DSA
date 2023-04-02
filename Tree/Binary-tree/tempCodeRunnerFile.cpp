#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void printNumber(int n){
    if(n == 0) return;
    if(n == 1) {
        cout<<n<<endl;
        return;
    }
    printNumber(n-1);
    printNumber(n-1);
    cout<<n<<endl;
}
int heightChecker(vector<int>& heights) {
        vector<int> clone = heights;
        sort(clone.begin(), clone.end());
        int count = 0;
        for(int i=0; i<heights.size(); i++){
            if(clone[i] != heights[i]){
                count++;
            }
        }
        return count;
    }
int main(){
    // printNumber(5);
    vector<int> heights{1,2,3,4,5};
    cout<<heightChecker(heights);

    return 0;
}