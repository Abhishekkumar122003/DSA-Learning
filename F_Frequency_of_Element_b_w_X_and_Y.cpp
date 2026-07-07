#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n, q;
    cin>>n>>q;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    //sort the array
    sort(arr , arr+n);
    while(q--){
        int x, y;
        cin>>x>>y;
        if(x>y){
            cout<<0<<"\n";
        }else if(x>arr[n-1] && y> arr[n-1]){
            cout<<0<<'\n';;
        }
        else{
            int start =0 , end =n-1;
            //find the first index of x
            int x_index;
            while(start <= end){
                int mid = start + (end -start)/2;
                if(arr[mid] == x){
                    x_index = mid;
                    end = mid -1;
                }else if(arr[mid]<x){
                    start = mid+1;
                }else{
                    end = mid -1;
                }
            }

            // find the last index of y
            start =0; end = n-1;
            int y_index;
            while(start <= end){
                int mid = start + (end - start)/2;
                if(arr[mid] <= y){
                    y_index = mid;
                    start = mid +1;
                }else{
                    end = mid-1;
                }
            }

            cout<<y_index - x_index +1<<"\n";
        }
    }
}