
/* Insertion Sort: Pick an element from an unsorted part & place it correctly in sorted part*/

#include<iostream>
using namespace std;

void Print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void Insertion(int arr[],int n){
    for (int i = 1; i < n; i++){
        int curr=arr[i];
        int prev=i-1;
        while(prev>=0 && arr[prev]>curr){
            swap(arr[prev],arr[prev+1]);
            prev--;

        }
        arr[prev+1]=curr;

    }

     Print(arr, n);
}
int main(){
     int arr[5] = {5, 4, 1, 3, 2};
    int n = sizeof(arr) / sizeof(int);
   Insertion(arr, n);
    return 0;
}

// Time complexity: O(n^2)