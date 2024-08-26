#include<iostream>
#include <cstring>
using namespace std;

void toUpperCase(char word[], int n){
    for(int i=0;i<n;i++)// if already in uppercase then continue
    {
        char ch=word[i];
        if(ch>='A'&& ch<='Z'){
            continue;
           //word[i] = ch + 'a' - 'A';  // Convert to lowercase
        }
        else{
            // continue;
            word[i]=ch-'a' +'A';
        }
    }
}
int main(){
    char word[] = "ZoHaIb";
    toUpperCase(word,strlen(word));
    cout<<word<<endl;
    cout<<" Length of word is: "<<strlen(word);
    
    
    return 0;
}