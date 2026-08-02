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
    map<int ,int> mp;
    int left=0 ; 
    int count=0, sum=0;
    for(int right=0; right<n; right++){
        sum += arr[right];
        if(sum<k){
            count +=1;
        }else{
            while(sum>=k){
                sum -= arr[left];
                if(sum<k){
                    count +=1;
                }
                left++;
            }
        }
    }
    cout<<count;
}