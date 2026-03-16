#include<iostream>
using namespace std;
int  main(){
    string s;
    cin>>s;
    int n=s.size();
    for(int i=0; i<n; i++){
        if(s[i]>='A' and s[i]<='Z'){
            s[i]+=32;
        }else{
            s[i]-=32;
        }
    };
    cout<<s;
}