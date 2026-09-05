#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int N,X;
    cin>>N>>X;
    if(X < N){
        cout<<"NO"<<endl;
    }else if(X%N ==0){
        cout<<"YES"<<endl;
    }else if(X == N){
        cout<<"YES"<<endl;
    }else if(X%N != 0) {
        cout<<"NO"<<endl;
    }else if(N < X){
        cout<<"YES"<<endl;
    }
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
}