#include <iostream>
using namespace std;
int main()
{
    // Input an Array

    /* int arr[5] = {1, 4, 5, 6, 7};
    int n = 5;
    for (int i = 0; i <= n; i++)
    {
        cout << arr[i]<<endl;
    } */
    
    // From users

    int n;
    cout<<" Enter length of Array: ";
    cin>>n;
    int arr[n];
     for (int i = 0; i < n; i++)
    {
        cin>> arr[i];
    }

     for (int i = 0; i < n; i++)
    {
        cout<< arr[i]<< ",";
    }

    return 0;
}



