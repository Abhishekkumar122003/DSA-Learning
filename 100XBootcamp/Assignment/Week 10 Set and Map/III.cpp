#include <bits/stdc++.h>
#include<iostream>
#define int long long 
using namespace std;
signed main(){
    int n, q;
    cin>>n>>q;
    map<int , int>mp;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        mp[x] =i+1;
}
    while(q--){
        int target;
        cin>>target;
        if(mp.find(target) != mp.end()){
            cout<<mp[target]<<"\n";
        }else{
            cout<<-1<<"\n";
        }
    }
}