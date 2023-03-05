#include <bits/stdc++.h>
using namespace std;
void input(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int duplicate(int arr[], int n)
{
    int i = 0;
    while (i < n)
    {
        if(arr[i] != i+1){
        int correct = arr[i] - 1; // element value - 1
        if (arr[i] != arr[correct])
        {
            swap(arr[i], arr[correct]);
        }
        else{
            return arr[i];
        }
    }
        else
        {
            i++;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    input(arr, n);

    cout<<duplicate(arr, n);

    return 0;
}