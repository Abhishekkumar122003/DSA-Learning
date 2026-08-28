#include<iostream>
#include<bits/stdc++.h>
#define int  long long
using namespace std;
const int N= 1e6;
int spf[ N + 1 ];

void pre(){
    // let assume everyone is prime
    for(int i=0; i<=N; i++){
        spf[i]=i;
    }
    for(int i=2; i<=N; i++){
        if(spf[i] == i){
            for(int j= i*2; j<=N; j+=i){
                spf[j] = min(spf[j] , i);
            }
        }
    }
    
     
}

void solve(){
    int n;
    cin>>n;
    map<int , int> mp;
    while(n>1){
        mp[spf[n]]++;
        n/=spf[n];
    }
    for(const auto& [key, value] : mp){
        cout<<key<<"^"<<value<<" ";
    }
}
    
    
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    pre();
    solve();
}