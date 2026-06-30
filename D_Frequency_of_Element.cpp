#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long 
signed main(){
    int n , q;
    cin>>n>>q;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    //for logic part
    while(q--){
        int target ;
        cin>>target;
        int start =0 , end = sizeof(arr) / sizeof(arr[0])-1;
        int L=-1;
        bool flag_1 = false;
        // for first occurence
        while(start <= end){
            int mid = start + (end - start)/2;
            if(arr[mid] == target){
                L = mid;
                flag_1 = true;
                end = mid-1;
            }else if(arr[mid] > target){
                end = mid -1;
            }else{
                start = mid +1;
            }
        }
        //for last occurnece
        int R=-1;
        start =0 , end = sizeof(arr) / sizeof(arr[0]);

        while(start <= end){
            int mid = start + (end - start)/2;
            if(arr[mid] == target){
                R = mid;
                flag_1 = true;
                start = mid+1;
            }else if(arr[mid] > target){
                end = mid -1;
            }else{
                start = mid +1;
            }
        }
        if(flag_1 == false){
            cout<<0<<'\n';
        }else if(L ==R){
            cout<<R-L+1<<'\n';
        }else{
            cout<<R-L+1<<'\n';

        }
        
    }
}