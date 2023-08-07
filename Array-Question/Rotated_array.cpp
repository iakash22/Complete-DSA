#include <bits/stdc++.h>
using namespace std;

// User Input function of array
void input(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

// Print The Array
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// Approach 1
// time Complexity -> O(n);
// time Complexity -> O(n);
void Rotate(int ans[], int n, int k)
{
    // Create temporary Array
    int *temp = new int[n];

    // Traverse the Array
    for (int i = 0; i < n; i++)
    {
        temp[(i + k) % n] = ans[i];
    }

    // temporary array to copy in  Ans Array
    for (int i = 0; i < n; i++)
    {
        ans[i] = temp[i];
    }
}

// Approach  2
// time Complexity -> O(n);
// time Complexity -> O(n);
void Rotate2(int arr[], int n, int k)
{
    int d = 0;
    k = k % n;
    int temp[n];

    for (int i = k; i < n; i++)
    {
        temp[d] = arr[i];
        d++;
    }

    for (int i = 0; i < k; i++)
    {
        temp[d] = arr[i];
        d++;
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
}
// Approach -> 3
// time Complexity -> O(n);
// time Complexity -> O(1); 
void rotate(int arr[],int n, int k){
    k = k%n;
    reverse(arr, arr+n);
    reverse(arr, arr+k);
    reverse(arr+k, arr+n);
}

    int main()
{
    int n, k;

    // user input size (n) of array ans rotate position (k)
    cin >> n >> k;

    // create a intigear array
    int arr[n];

    // call input fuction
    input(arr, n);

    // Call Approach->2 function
    Rotate2(arr, n, k);

    // call Print function
    print(arr, n);

    return 0;
}