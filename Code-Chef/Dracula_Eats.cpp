#include<iostream>
#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve();

signed  main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}

void solve(){
    int N;
    cin>>N;
    if(N ==1){
        cout<<0;
    }else if(N >= 2 && N<9){
        cout<<1<<"bdfb";
    }else{
        int favDay = N/7;
        if(N%7 >= 2){
            favDay++;
        }
        cout<<favDay;
    }
    cout<<endl;
}