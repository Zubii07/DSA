
/* Sub Array is continuous part of an array*/

#include <iostream>
using namespace std;

void PrintSubArray(int arr[], int n)
{
    // first print Indexes of sub Arrays
    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            // cout<<"("<<start<<","<<end<<") ";
            // Now print Starting and Ending Element of sub arrays
            for (int i = start; i <= end; i++)
            {
                cout << arr[i];
            }
            cout << ",";
        }
        cout << endl;
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    PrintSubArray(arr, n);
    return 0;
}
// Time complexity O(n cube)
