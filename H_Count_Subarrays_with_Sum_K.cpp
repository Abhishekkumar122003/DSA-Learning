#include<iostream>
#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    int n, k;
    cin>>n>>k;
    int arr[n];
    map<int ,int> mp;
    int left=0 , count=0, sum=0;
    for(int right=0; right<n; right++){
        sum += arr[right];
        mp[arr[right]]++:
        if(sum < k){
            count += mp[arr[right]];
        }else{
            while(sum >= k){
                sum -= arr[left];
                mp[arr[left]]--;
                left++;
                count += mp[arr[left]];
            }
        }
    }
}