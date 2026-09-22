#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int N;
    cin>>N;
    cout<<N*(N-1);
    cout<<endl;
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