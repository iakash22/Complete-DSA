#include <iostream>
using namespace std;
int Find_smallest_Larger_element(int array[], int n, int key)
{
    int startP = 0;
    int endP = n-1;
    if(array[0] < key){
        return -1;
    }
    while (startP <= endP)
    {
        int midP = startP + (endP - startP) / 2;

        if (array[midP] == key)
        {
            return array[midP];
        }
        else if (array[midP] > key)
        {
            endP = midP - 1;
        }
        else
        {
            startP = midP + 1;
        }
    }
    return array[startP];
}

int main()
{
    int n;
    cin >> n;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int key;
    cin >> key;
    cout << Find_smallest_Larger_element(array, n, key) << endl;

    return 0;
}