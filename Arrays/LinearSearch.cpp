#include<iostream>
using namespace std;
int main(){
    int n, key;
    cout<<" Enter n: ";
    cin>>n;
    int arr[n];
     for (int i = 0; i < n; i++)
    {
        cin>> arr[i];
    }

    cout<<" Enter Key: ";
    cin>>key;

     for (int i = 0; i < n; i++)
    {
        if(key == arr[i]){
            cout<<" Key Found at"<<" "<<i;
            return 0;
        }
         
    }
    cout<<" Key not found";     
     
      return 0;
}
