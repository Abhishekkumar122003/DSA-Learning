#include<iostream>
#include<bits/stdc++.h>
#define int long long 
using namespace std;
signed main(){
    unordered_map<int ,int> mp;
     
    int n , q;
    cin>>n>>q;
    for(int i=0; i<n; i++){
        int ele ;
        cin>>ele;
        mp[ele]++;
    }
    while(q--){
        int target;
        cin>>target;
        if(mp.find(target) != mp.end()){
            cout<<mp[target]<<'\n';
        }else{
            cout<<0<<'\n';
        }
    }


}