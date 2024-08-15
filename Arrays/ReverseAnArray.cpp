#include<iostream>
using namespace std;
int main(){  
    int arr[5] = {89,76,65,54,32};
    int n = 5;

    // Two pointers approach (Without extra spaces)
    int start = 0,end = n-1;
    while(start < end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

     for (int i = 0; i < n; i++)
    {
        cout<< arr[i]<< ",";
    }
    
    return 0;
}
