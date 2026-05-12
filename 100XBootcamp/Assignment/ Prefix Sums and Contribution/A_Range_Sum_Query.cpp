#include<iostream>
using namespace std;
#define int  long long 
signed main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    int sum=0;
    int P[n];
    for(int i=0; i<n; i++){
        sum+= A[i];
        P[i]=sum;
    }

    int q;
    cin>>q;
    while(q--){
        int l , r;
        int ans=0;
        cin>>l>>r;
        l-- , r--;
        if(l==0){
            ans=P[r];
        }else{
            ans = P[r] - P[l-1];
        }
        cout<<ans<<"\n";
    }
}