#include<iostream>
#include<queue>
using namespace std;

void FirstNonRepeat(string str){
    queue<char>q;
    int frequency[26]={0};
    for(int i=0; i<str.size();i++){
        char ch = str[i];
        q.push(ch);
        frequency[ch - 'a']++;

        while(!q.empty() && frequency[q.front()-'a']>1){
            q.pop();
        }

        if(q.empty()){
            cout<<" -1\n";
        }else{
            cout<< q.front()<<"\n";
        }

    }
}
int main(){
    string str = "aabccxb";
    FirstNonRepeat(str);

    return 0;
}