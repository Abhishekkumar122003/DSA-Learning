#include<iostream>
#define int long long 
using namespace std;
signed main(){
    int n,q,k;
    cin>>n>>q>>k;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int p[n] , num=0;
    for(int i=0; i<n; i++){
        int val=a[i];
        int ans=0;
        for(int j=1; j*j<=val; j++){
            if(val%j==0){
                if(j*j==val){
                    ans+=1;
                }else{
                    ans+=2;
                }
            }
        }
        if(ans == k){
            num++;
            p[i] = num;
        }else{
            p[i]=num;
        }
    }

    while(q--){
        int l,r;
        cin>>l>>r;
        l-- , r--;
        int ans=0;
        if(l==0){
            ans = p[r];
        }else{
            ans=p[r] - p[l-1];
        }
        cout<<ans<<"\n";
    }
}