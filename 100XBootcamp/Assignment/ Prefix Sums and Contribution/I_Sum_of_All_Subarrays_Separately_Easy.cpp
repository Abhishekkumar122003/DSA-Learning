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
    for(int l=0; l<n; l++){
        for(int r=l; r<n; r++){
            int ans =0;
            for(int i=l; i<=r; i++){
                ans += a[i];
            }
            cout<<ans<<"\n";
        }
    }
}