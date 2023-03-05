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

// arr[0 to n-1]
void cyclic_sort0(int arr[], int n)
{
    int i = 0;
    while (i < n)
    {
        int correct = arr[i]; // element value
        if (arr[i] != arr[correct])
        {
            swap(arr[i], arr[correct]);
        }
        else
        {
            i++;
        }
    }
}

// arr[1 to n]
void cyclic_sort1(int arr[], int n)
{
    int i = 0;
    while (i < n)
    {
        int correct = arr[i] - 1; // element value - 1
        if (arr[i] != arr[correct])
        {
            swap(arr[i], arr[correct]);
        }
        else
        {
            i++;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    input(arr, n);

    // cyclic_sort0(arr, n);
    cyclic_sort1(arr, n);
    display(arr, n);

    return 0;
}