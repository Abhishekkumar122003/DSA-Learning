#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a,b;
    cin>>a>>b;
    if(a*10 == b*5){ cout<<"ANY"<<"\n";}
    else if(a*10 > b*5){cout<<"FIRST"<<endl;}
    else{cout<<"SECOND"<<endl;}
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
}