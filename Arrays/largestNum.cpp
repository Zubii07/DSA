#include<iostream>
using namespace std;
int main(){

    int arr[] = {12,34,56,78,99};
    int n = 5;
    int max = arr[0];
    for(int i = 0; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
            
        }
    }

    cout<<" max ="<<max;
    return 0;
}
