#include<iostream>
#include <cstring>
using namespace std;
int main(){
    //  1)  strcpy(destination,source): to copy string from one char array to another
    char str1[100]="India";
    char str2[100]="Hello World";
    strcpy(str1,str2);
    cout<<str1<<endl;

    // 2) strcat(str1,str2): to concatenate/join 1 string with another string
    char str3[100]="Pakistan";
    char str4[100]=" Zindabad";
    strcat(str3,str4);
    cout<<str3<<endl;


    // 3) strcmp(str1,str2): compares 2 strings based on values( -ve, 0, +ve)
    /*   if 1st str < 2nd string output will b -ve 
         if 1st str > 2nd string output will b +ve
    */
    char str5[100]="mango";
    char str6[100]="strawberry";
    strcmp(str5,str6);
    cout<<str5<<endl;

    return 0;

    
}