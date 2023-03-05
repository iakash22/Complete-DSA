#include <bits/stdc++.h>
using namespace std;
void input(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

int  firstOccrns(int arr[], int n, int key)
{
    int s = 0;
    int ans = 0;
    int flag = 0;
    int e = n - 1;
    while (s <= e)
    {

        int mid = s + (e - s) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            flag = 1;
            e = mid-1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
    }
    if(flag == 0){
        return -1;
    }
    return ans;
}
int  lastOccrns(int arr[], int n, int key)
{
    int s = 0;
    int flag = 0;
    int ans = 0;
    int e = n - 1;
    while (s <= e)
    {

        int mid = s + (e - s) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            flag=1;
            s = mid+1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
    }
    if(flag == 0){
        return -1;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    int key;
    cin >> key;
    int arr[n];
    input(arr, n);
    int First = firstOccrns(arr, n, key);
    int Last = lastOccrns(arr,n,key);
    cout<<First<<" "<<Last<<endl;
    // pair<int, int>p;
    // p.first=first(arr,n,key);
    // p.second=last(arr,n,key);
    if(Last >= 0 && 0 <= First){
    int total_occurns = (Last - First) + 1;
    cout<<total_occurns;
    }

    return 0;
}