#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){

    int min = INT_MAX;
    int t=3;
    int sum =0;
    while(t--){
        int num;
        cin>>num;
        if(num <= min){
            min = num;
        }
        sum += num;
    }
    cout<<sum - min<<"\n";

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