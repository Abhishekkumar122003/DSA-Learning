#include<iostream>
#include<cmath>
using namespace std;
 void solve(){
    int n,m,k;
    cin>>n>>k>>m;
    int cb= k*m;
    if(n==cb){
        cout<<1;
    }else if(n%cb == 0){
        cout<<n/cb;
    }else if(n%cb != 0){
        cout<<n/cb+1;
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