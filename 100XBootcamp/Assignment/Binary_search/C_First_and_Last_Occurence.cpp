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
        // for first occurence
        while(start <= end){
            int mid = start + (end - start)/2;
            if(arr[mid] == target){
                L = mid;
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
                start = mid+1;
            }else if(arr[mid] > target){
                end = mid -1;
            }else{
                start = mid +1;
            }
        }

        if(L==-1 and R==-1){
            cout<<-1<<"\n";
        }else{
            cout<<L+1<<" "<<R+1<<"\n";
        }
    }
}