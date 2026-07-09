#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n, k;
    cin>>n>>k;
    int arr[n];
    int start=0, end=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        start= max(start , arr[i]);
        end += arr[i];
    }
        int ans;
    while(start <= end){
        int mid = start + (end - start)/2;
        int walls=0 , painters=1;
        for(int i=0; i<n; i++){
            walls +=arr[i];
            if(walls > mid){
                walls = arr[i];
                painters++;
            }
        }
        if(painters <= k){
            ans=mid;
            end = mid-1;
        }else{
            start = mid+1;
        }
    }
    cout<<ans;


}