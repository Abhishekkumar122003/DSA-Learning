#include<iostream>
#include<bits/stdc++.h>
#define int  long long
using namespace std;



void solve(){
    int n;
   cin>>n;
   for(int i=2; i*i <= n; i++){
    int count=0;
    while(n % i == 0){
        count++;
        n /= i;
    }

    if(count > 0){
        cout<<i<<"^"<<count<<" ";
    }

   }
    if(n != 1){
        cout<<n<<"^"<<1<<" ";
    }
}
    
    
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}
