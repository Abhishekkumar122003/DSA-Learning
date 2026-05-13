#include<iostream>
using namespace std;
#define int long long 
signed main(){
    int n,q;
    cin>>n>>q;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int  p[n], ans=0;
    // for(int i=0; i<n; i++){
    //    ans+=a[i];
    //    p[i]=ans;
    // }
    // while(q--){
    //     int l, r;
    //     cin>>l>>r;
    //     l-- , r--;
    //     int ans=0; int iter=0;
    //     for( int i=l; i<=r; i++){
    //         iter++;
    //         if(iter%2!=0){
    //             ans+= a[i];
    //         }else{
    //             ans-=a[i];
    //         }
    //     }
    //     cout<<ans<<"\n";
    // }

    // I need more efficient and fast code

    for(int i=0; i<n; i++){
      if(i%2==0){
        ans+=a[i];
        p[i]=ans;
      }else{
        ans-=a[i];
        p[i] = ans;
      }
    }
    while(q--){
        int l, r;
        cin>>l>>r;
        l-- , r--;
        int ans=0; 
        if(l==0){
            ans=p[r];
        }else{
            if(l%2==0){
                ans = p[r] -p[l-1];
            }else{
                ans = -(p[r] - p[l-1]);
            }
        }
        cout<<ans<<"\n";
    }
     
}