#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int N,X,P;
    cin>>N>>X>>P;
    int marks=X*3 -(N-X);
    if(marks >= P){
        cout<<"PASS"<<"\n";
    }else{
        cout<<"FAIL"<<"\n";
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