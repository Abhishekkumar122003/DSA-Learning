#include<iostream>
#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    int n, tar;
    cin>>n>>tar;
    map<int , int> mp;
    int pre_sum =0 , counter=0;
    for(int i=1; i<=n; i++){
        int num;
        cin>>num;
        pre_sum += num;
        // check is pre_sum == target=>counter++
        if(pre_sum == tar){
            counter++;
        }
        
        int req = pre_sum - tar;
        //check if mp.contain(req)=>counter++
        if(mp.find(req) != mp.end()){
            counter +=mp[req];;
        }

        mp[pre_sum]++;
        
    }
    // for(auto x: mp){
    //     cout<<x<<" ";
    // }
    cout<<counter;
    return NULL;
}