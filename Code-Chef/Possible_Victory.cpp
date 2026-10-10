#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int R, O, C;
    cin>>R>>O>>C;
    int leftRun = R-C;
    int leftOver = 20 - O;
    int winRun = leftOver * 6*6;
    if(winRun > leftRun){
        cout<<"YES"<<"\n";
    }else{
        cout<<"NO"<<"\n";
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}