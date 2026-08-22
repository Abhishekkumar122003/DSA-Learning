#include<iostream>
#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    int q;
    cin>>q;
    while(q--){
        int n;
        cin>>n;
        int factorCount=0;
        for(int i=1; i*i<=n;i++){
            if(n%i==0){
                if(n/i !=i){
                    factorCount+=2;
                }else{
                    factorCount++;
                }
            }
        }
        cout<<factorCount<<"\n";
    }
}