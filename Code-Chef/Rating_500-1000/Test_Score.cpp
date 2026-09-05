#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int N,X,Y;
    cin>>N>>X>>Y;
    if(N*X >= Y && Y%X == 0){
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
    while (t--)
    {
        solve();
    }
    
}