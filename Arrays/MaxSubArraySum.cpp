/* We can solve this problem by Kadan's Algorithm Approach (Dynamic Programing)
   This Approach is very imporatnt for problem solving round in different companies
   By this approach, time compexity will be O(n)
   */

#include<iostream>
using namespace std;
 
 void MaxSubArraySum(int arr[],int n){
    int maxSum = INT16_MIN;
    int currSum = 0;
    for(int i = 0;i<n;i++){
          currSum+=arr[i];
          maxSum = max(currSum,maxSum);
          if(currSum<0){
            currSum=0;
          }
    }
    cout<<"Maximum Sub Array Sum = "<<maxSum;
     }
int main(){
    // we can change array size and elements later in future.
    int arr[6] = {2,-3,6,-5,4,2};
    int n = sizeof(arr) / sizeof(int);
    MaxSubArraySum(arr,n);

}