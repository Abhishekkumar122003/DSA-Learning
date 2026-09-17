#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(){
   int a, b, c;
   cin>>a>>b>>c;
   int MAX = max({a,b,c});
   if(a == MAX){
    cout<<max(b,c);
   }else if(b == MAX){
    cout<<max(a,c);
   }else{
    cout<<max(a,b);
   }
   cout<<endl;



}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1; 
    cin>>t;
    while(t--){
        solve();
    }
}