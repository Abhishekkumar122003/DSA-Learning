#include<iostream>
#include<bits/stdc++.h>
#include<climits>
using namespace std;

void solve(){
    int great=INT_MIN;
    int sum=0;
    int i=4;
    while(i--){
        int num;
        cin>>num;
        great = max(great , num);
        sum += num;
    }
    sum -= great;
    if(great > sum){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
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