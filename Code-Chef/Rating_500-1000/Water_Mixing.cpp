#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,x,y;
    cin>>a>>b>>x>>y;
    if(a == b){
        cout<<"YES"<<"\n";
    }else if(a > b){
        int req = abs(a-b);
        if(y>=req){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
    }else{
        int req = abs(a-b);
        if(x>= req){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
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