#include <bits/stdc++.h>
using namespace std;
void input(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
int pi_vot(int arr[], int n)
{
    // find maximum pivot element index in rotated sorted array
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (mid < e && arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        if (mid > s && arr[mid] < arr[mid - 1])
        {
            return mid - 1;
        }
        if (arr[s] >= arr[mid])
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}
int Pivot(int arr[], int n)
{
    // find minimum pivot element index in rotated sorted array
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] >= arr[e])
        //  if( arr[mid] >= arr[0])

        {
            s = mid + 1;  
            //  s = mid;
        }
        else
        {
            e = mid;   
            // e = mid - 1;
        }
    }
    return e; // return s; its return maximum number in rotated array
}
int main()
{
    int n = 7;
    int arr[n]={4,5,6,7,8,1,2};
    // cin >> n;
    // input(arr, n);
    // cout << Pivot(arr, n);
    cout << pi_vot(arr, n);

    return 0;
}