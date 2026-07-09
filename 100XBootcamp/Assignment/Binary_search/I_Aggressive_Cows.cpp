#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    sort(arr , arr+n);
    int start =1 , end = arr[n-1]-arr[0];
    int ans;
    while(start <= end){
        int mid = start + (end - start)/2;
        int pos_of_cow=arr[0] , count_of_cow=1;
        for(int i=0;     i<n; i++){
            if(pos_of_cow +mid <= arr[i]){
                pos_of_cow=arr[i];
                count_of_cow++;
            }
        }
        if(count_of_cow >= k){
            ans = mid;
            start = mid+1;
        }else{
            end = mid-1;
        }

    }
    cout<<ans;
}