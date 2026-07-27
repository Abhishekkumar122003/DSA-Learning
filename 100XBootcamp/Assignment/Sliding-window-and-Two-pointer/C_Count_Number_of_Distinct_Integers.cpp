#include<iostream>
#include<bits/stdc++.h>
#define int long long 
using namespace std;
signed main(){
    int n, k;
    cin>>n>>k;
    int a[n];
    map<int ,int> mp;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(i<k){
            mp[a[i]]++;
        }
    };
    cout<<mp.size()<<" ";
    int left=0 , right=k;
    while(right < n){
        mp[a[right]]++;
        mp[a[left]]--;
        if(mp[a[left]] == 0){
             mp.erase(a[left]);
        }
        cout<<mp.size()<<" ";
        right++ , left++;
    }
    
}