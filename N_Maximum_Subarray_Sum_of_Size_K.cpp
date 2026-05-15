#include<iostream>
using namespace std;
#define int long long
signed main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int sum = 0 , ans=0;
    for(int i=0; i<n; i++){
        sum += (i+1)*( n -i )*a[i];
        if(ans<sum){
            ans = sum;
        }
    }
    cout<<ans;
}