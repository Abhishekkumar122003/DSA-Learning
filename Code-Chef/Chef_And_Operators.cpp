#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int a , b;
    cin>>a>>b;
    if(a>b){
        cout<<">";
    }else if(a<b){
        cout<<"<";
    }else{
        cout<<"=";
    }
    cout<<"\n";
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}