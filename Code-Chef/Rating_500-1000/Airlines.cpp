#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int x, n;
    cin>>x>>n;
    int left_passenger=0;
    int req_aircraft=0;
    int total_passanger= x*100;

    if(total_passanger >= n){
        cout<<0<<"\n";
        return ;
    }else{
        left_passenger=n-total_passanger;
        if(left_passenger % 100 ==0){
            req_aircraft = left_passenger/100;
        }else{
            req_aircraft= left_passenger/100 + 1;
        }
    }
    cout<<req_aircraft<<"\n";
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