#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(){
   int x,y;
   cin>>x>>y;
   int A_B=(500-2*x)+ (1000-4*(x+y));
   int B_A=(1000 - 4*y) + (500 - 2*(x+y));
   if(A_B>B_A){
    cout<<A_B;
   }else{
    cout<<B_A;
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