#include<iostream>
#include<bits/stdc++.h>
#define int long long 
using namespace std;
signed main(){
    int n, k;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    map<int , int> mp;
    int left =0, count_sub_arr=0;
    for(int right =0; right<n; right++){
        mp[arr[right]]++;
        while(mp.size()>k){
           
                mp[arr[left]]--;
            if(mp[arr[left]] ==0){
                mp.erase(arr[left]);
            }
            
                left++;

        }
        count_sub_arr += right - left +1;
    }
    cout<<count_sub_arr;
}