#include <iostream>
using namespace std;
int main()
{

    // For Binary Search, Array must be sorted.

    int arr[] = {11, 17, 22, 30, 36, 40, 44, 51, 59, 70};
    int n = sizeof(arr) / sizeof(int);
    int start = 0, end = n - 1, mid, key;
    cout << " Enter Key: ";
    cin >> key;

    while (start <= end)
    {
        mid = (start + end) / 2;
        if (key == arr[mid])
        {
            cout << " Found At index " << mid;
            return 0;
        }
        else if (key < arr[mid])
        {
            end = mid - 1; // 1st half
        }
        else
        {
            start = mid + 1; // 2nd half
        }
    }
      cout<<" Not Found";
    return 0;
}
