
/*Idea: Use a frequency count of elements from min to max*/

#include <iostream>
#include <algorithm> // For min function
#include <limits.h>  // For INT_MAX
using namespace std;

void Print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void Count(int arr[], int n)
{
    int freq[100000] = {0}; // let range
    int minVal = INT_MAX, maxVal = INT_MIN;

    // 1ST Step
    for (int i = 0; i < n; i++) // loop to initialize frequency && find min and max element of array
    {
        freq[arr[i]]++;
        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal, arr[i]);
    }

    // 2nd step
    for (int i = minVal, j = 0; i <= maxVal; i++)
    {
        while (freq[i] > 0)
        {
            arr[j++] = i;
            freq[i]--;
        }
    }
    Print(arr, n);
}

int main()
{
    int arr[] = {1, 4, 1, 3, 2, 4, 3, 7};
    int n = sizeof(arr) / sizeof(int);
    Count(arr, n);
    return 0;
}
