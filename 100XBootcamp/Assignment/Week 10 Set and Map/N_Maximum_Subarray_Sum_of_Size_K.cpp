#include<iostream>
#define int long long
using namespace std;
signed main(){
    int n , k;
    cin>>n>>k;
    k--;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0; i<=k; i++){
        sum+= arr[i];
    }
    int st=0 , ed=k+1;
    int ans=sum;
    while(ed<n){
        ans += arr[ed] - arr[st];
        if(ans>sum){
            sum=ans;
        }
        st++ , ed++;
    }
    cout<<sum;



}