#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int N = 1e6;
 int factorCount[N +1];
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin>>q;
    
      
        for(int i=1; i<=N; i++){
        for(int j=i; j<=N; j+=i){
            
                factorCount[j]++;
            
        }
       }
    while(q--){
        int n;
        cin>>n;
        cout<<factorCount[n]<<"\n"; 
    }
    
}