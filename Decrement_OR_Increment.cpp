#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(){
   int a,b;
   cin>>a>>b;
   int total_cookies=a+b;
   if(total_cookies % 2 != 0){
    cout<<-1<<endl;
   }else{
    int half = total_cookies/2;
    int req = half - b;
    cout<<req<<endl;
   }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1; 
    
    while(t--){
        solve();
    }
}