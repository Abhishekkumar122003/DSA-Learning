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
    };
    sort(arr , arr+n);  // now array is sorted
    while(q--){
        
        int x;
        cin>>x;
        //handle the edge case
        if(x>arr[n-1]){
            cout<<-1<<"\n";
        }else {
        int start =0 , end =n-1;
        int elm=-1;
        while(start <= end){
            int mid = start + (end - start)/2;
            if(arr[mid] == x){
                elm = arr[mid];
                break;
            }else if(arr[mid] > x){
                elm = arr[mid];
                end = mid -1;
            }else {
                start = mid +1;
            }
        }
        cout<<elm<<"\n";
        }
    }
}