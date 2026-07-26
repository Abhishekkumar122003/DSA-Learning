#include<iostream>
#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    int n,target;
    cin>>n>>target;
    map<int ,int> mp;
    int ans_count=0;
    for(int i=1; i<=n; i++){
        int num;
        cin>>num;
        int req = target - num;
        if(mp.find(req) != mp.end()){
            ans_count += mp[req];
        }

        if(mp.find(num) != mp.end()){
            mp[num]++;
        }else{
            mp[num]=1;
        }
    }
    
    cout<<ans_count;


}