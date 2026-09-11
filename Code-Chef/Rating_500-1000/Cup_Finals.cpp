#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int x,y;
    cin>>x>>y;
    int d;
    cin>>d;
    if(abs(x-y) <= d){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    
    cout<<"\n";

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