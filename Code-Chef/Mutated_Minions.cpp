#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,k;
    cin>>n>>k;
    int count=0;
    for (int i = 0; i < n; i++)
    {
       int num;
       cin>>num;
       if((num + k) % 7 == 0 ){
        count++;
       }
    }
    cout<<count;
    
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
}