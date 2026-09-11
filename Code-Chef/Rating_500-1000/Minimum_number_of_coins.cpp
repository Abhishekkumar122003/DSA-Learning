#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int x;
    cin>>x;
    if(x % 5 ==0){
        if(x % 10 == 0){
            cout<<x/10<<"\n";
        }else{
            cout<<x/10 + 1<<"\n";
        }
    }else{
        cout<<-1<<endl;
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