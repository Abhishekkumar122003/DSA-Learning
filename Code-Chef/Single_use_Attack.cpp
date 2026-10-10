#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int x,y,h;
    cin>>h>>x>>y;

    if(h<=y){
        cout<<1;
    }else{
        int count =1;
        int lefthp = h-y;
        count += lefthp/x;
        if(lefthp % x != 0){
            count++;
        }
        cout<<count;
    }
    cout<<endl;

}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}