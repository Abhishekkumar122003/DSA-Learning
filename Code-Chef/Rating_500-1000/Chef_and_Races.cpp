
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(){

    int X,Y,A,B;
    cin>>X>>Y>>A>>B;
    int count=2;
    if(X==A || X==B){
        count--;
    }
    if(Y == A || Y == B){
        count--;
    }

    cout<<count<<"\n";

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