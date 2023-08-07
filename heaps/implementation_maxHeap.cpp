#include<iostream>
#include<vector>
using namespace std;
class heap{
    public:
        int arr[101];
        int size;

        heap(){
            size = 0;
        }

        void insertion(int val){
            size = size + 1;
            int index = size;
            arr[index] = val;
            while(index > 1){
                int parentIndex = index/2;
                if(arr[index] > arr[parentIndex]){
                    swap(arr[index],arr[parentIndex]);
                    index = parentIndex;
                }
                else break;
            }
        }
        int deletion(){
            int ans = arr[1];
            arr[1] = arr[size];
            size--;
            int index = 1;
            while(index < size){
                int left = index*2;
                int right = index*2 + 1;

                int largest = index;
                if(left < size && arr[largest] < arr[left]){
                    largest = left;
                }
                if(right < size && arr[largest] < arr[right]){
                    largest = right;
                }

                if(largest == index){
                    break;  
                } 
                else{
                    swap(arr[largest], arr[index]);
                    index = largest;
                }
            }
            return ans;
        }
};
int main(){
    heap maxHeap;
    maxHeap.arr[0] = -1;
    maxHeap.arr[1] = 50;
    maxHeap.arr[2] = 30;
    maxHeap.arr[3] = 25;
    maxHeap.arr[4] = 5;
    maxHeap.arr[5] = 0;
    maxHeap.size = 5;
    maxHeap.insertion(100);
    maxHeap.insertion(15);
    maxHeap.insertion(10);
    maxHeap.insertion(20);
    maxHeap.insertion(1);
    maxHeap.insertion(200);
    cout<<"Insert new values : "<<endl;
    for(int i=1; i<=maxHeap.size; i++){
        cout<<maxHeap.arr[i]<<" ";
    }
    cout<<endl<<"After deletion 1 : "<<endl;
    maxHeap.deletion();
    for(int i=1; i<=maxHeap.size; i++){
        cout<<maxHeap.arr[i]<<" ";
    }
    cout<<endl<<"After deletion 2 : "<<endl;
    maxHeap.deletion();
    for(int i=1; i<=maxHeap.size; i++){
        cout<<maxHeap.arr[i]<<" ";
    }

    return 0;
}