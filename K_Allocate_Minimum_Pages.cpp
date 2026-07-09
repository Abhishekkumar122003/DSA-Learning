#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n,k;
    cin>>n>>k;
    if(k>n){
        cout<<-1;
        return NULL;
    }
    int arr[n];
    int s=0, e=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        s = max(s , arr[i]);
        e += arr[i];
    }
    int ans =-1;
    while(s <=e){
        int mid = s + (e - s)/2;
        int pages =0; 
        int student=1;
        for(int i=0; i<n; i++){
            pages +=arr[i];
            if(pages>mid){
                student++;
                pages = arr[i];
            }
        }

        if(student <= k){
            ans = mid;
            e = mid-1;
        }else{
            s = mid+1;
        }
    }
    cout<<ans;
}