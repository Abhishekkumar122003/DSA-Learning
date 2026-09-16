#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(){
   int N,K;
   cin>>N>>K;
    if(N>K){
        cout<<0<<"\n";
    }else{
        int c2= K - N;
        cout<<c2*2<<"\n";
    }

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t; 
    
    while(t--){
        solve();
    }
}