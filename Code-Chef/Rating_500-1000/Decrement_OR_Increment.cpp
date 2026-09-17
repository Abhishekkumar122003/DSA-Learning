#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(){
   int N;
   cin>>N;
   (N% 4== 0)? cout<<N+1:cout<<N-1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1; 
    
    while(t--){
        solve();
    }
}