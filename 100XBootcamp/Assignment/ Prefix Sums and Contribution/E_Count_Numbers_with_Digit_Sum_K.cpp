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
    int p[n];
    int num=0;
    for(int j=0; j<n; j++){
        int sum=0;
        int val=a[j];
        while(val){
            sum+=val%10;
            val/=10;

        }
        if(sum==k){
            num++;
            p[j]=num;
        }else{
            p[j]=num;

        }
    }
    while(q--){
        int l,r;
        cin>>l>>r;
        l--,r--;
        int ans=0;
        if(l==0){
            ans=p[r];
        }else{
            ans=p[r]-p[l-1];
        }
        cout<<ans<<"\n";

    }


}