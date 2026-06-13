#include<iostream>
#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    int n,tg;
    cin>>n>>tg;
    map<int , int> MP;
    in tans=0;
    for(int i=0; i<n; i++){
        int k;
        cin>>k;
        int req = tg-k;
        if(MP.find(req) != MP.end()){
            ans += MP[req];
        }
        // insert the input value to the Map
        if(MP.find(k) != MP.end()){
            MP[k]++;
        }
        //if it first time then insert into the map
        else{
            MP[k]++;
        }
    }
    cout<<ans;

}