#include <iostream>
using namespace std;

void Print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selection(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIdx = i;
        // loop for finf min
        for (int j = i + 1; j < n; j++)
        {

            // if(arr[j]>arr[minIdx]) for decending order
            if (arr[j] < arr[minIdx]) // for Acending order
            {
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]);
    }
    Print(arr, n);
}
int main()
{
    int arr[5] = {5, 4, 1, 3, 2};
    int n = sizeof(arr) / sizeof(int);
    selection(arr, n);
    return 0;
}