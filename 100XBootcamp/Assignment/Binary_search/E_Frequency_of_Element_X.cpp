#include<iostream>
#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    int n , q;
    cin>>n>>q;
    // map<int , int> mp;
    int arr[n];
    for(int i =0; i<n; i++){
       cin>>arr[i];
    }
    sort(arr, arr+n);
        // for(int i=0; i<n; i++){
        //     int mn=arr[i];
        //     int location=i;
        //     for(int j=i+1; j<n; j++){
        //         if(mn>arr[j]){
        //             mn=arr[j]; location=j;
        //         }
        //     }
        //     swap(arr[i] , arr[location]);
        // }
    while(q--){
        int a=-1;
        int x;
        cin>>x;
       int s=0 ;int  e=n-1;
       while(s<=e){
        int mid= s+(e - s)/2;
        if(arr[mid]>=x){
            a=mid;
            e=mid-1;
        }else{
            s=mid+1;
        }
        
       }
       if(a!=-1){
        cout<<n-a<<"\n";
        }else{
            cout<<0<<"\n";
        }
    }
}