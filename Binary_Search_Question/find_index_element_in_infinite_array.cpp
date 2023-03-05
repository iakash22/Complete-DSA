#include <iostream>
using namespace std;
int binaryS(int array[], int st,int ed, int key)
{
    while (st <= ed)
    {
        int midP = st + (ed - st) / 2;

        if (array[midP] == key)
        {
            return midP;
        }
        else if (array[midP] > key)
        {
            ed = midP - 1;
        }
        else
        {
            st = midP + 1;
        }
    }
    return -1;
}
int findIndex(int arr[],int target){
    int st = 0;
    int ed = 1;
    while(arr[ed] < target){
        int temp = ed+1;
        ed = ed + ((ed - st )+ 1)*2;
        st = temp;
    }
    return binaryS(arr,st,ed,target);
}
int main()
{
    int n;
    cin >> n;
    int array[n];
    //input array infinite size 
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int key;
    cin >> key;
    cout << findIndex(array,key) << endl;

    return 0;
}