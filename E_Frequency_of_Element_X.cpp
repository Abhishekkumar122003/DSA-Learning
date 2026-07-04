#include<iostream>
#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    int n , q;
    cin>>n>>q;
    map<int , int> mp;
    for(int i =0; i<n; i++){
        int num;
        cin>>num;
        mp[num]++;
    }

    while(q--){
        int x;
        cin>>x;
        if( mp.find(x) != mp.end() ){
            cout<<mp[x]<<"\n";
        }else{
            cout<<0<<"\n";
        }
    }
}