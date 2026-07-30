#include<iostream>
using namespace std;
#define int long long
signed main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    int window=2;
    int ans;
    while(window<n){
        int sum=0;
        for(int i=0; i<window; i++){
            sum+=arr[i];
        }
        if(sum<k){
            ans=window;
        }
        int left=0 , right=window;
        while(right<n){
        sum+=arr[right] - arr[left];
        if(sum<k){
            ans=window;
        }
        right++;
        left++;
    }
    window++;
    }
    cout<<ans;
}