#include<iostream>
#include<bits/stdc++.h>
using namespace std;

 void solve(){
    int a, b,c,d;
    cin>>a>>b>>c>>d;
    if(a==10&&b==10){
        cout<<"IMPOSSIBLE"<<endl;
    }else if(a>c || b>d){
        cout<<"IMPOSSIBLE"<<endl;
    }else{
        cout<<"POSSIBLE"<<"\n";
    }
 }

 int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
 }