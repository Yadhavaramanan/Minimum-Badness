#include <bits/stdc++.h>
using namespace std;
int main(){
    string s="RRWBWBW";
    cout<<s<<"\n";
    for(int i=0;i<s.length();i++){
        if(s[i]=='W'){
            s[i]=s[i-1];
        }
        else{
            continue;
        }
    }
    int count=0;
    for(int i=0;i<s.length()-1;i++){
        if(s[i]!=s[i+1]){
            count++;
        }
    }
    cout<<s<<"\n";
    cout<<count;
    return 0;
}
