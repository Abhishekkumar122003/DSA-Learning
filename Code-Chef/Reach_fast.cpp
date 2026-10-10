#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int a,b,k;
    cin>>a>>b>>k;
    if(a-b ==0){
        cout<<0;
    }
    else if(abs(a - b) < k){
        cout<<1;
    }else{
        if(abs(a-b) % k != 0){
            cout<<abs(a - b)/k +1;
        }else{
            cout<<abs(a - b)/k;
        }
    }
    cout<<endl;
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