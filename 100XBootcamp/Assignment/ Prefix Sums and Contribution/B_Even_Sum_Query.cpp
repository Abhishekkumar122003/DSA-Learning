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
        if(i%2==0){
        P[i]=sum;
        }else{
            sum+= A[i];
            P[i]=sum;
        }
    }
    // for(int i=0;i<n;i++){
    //     cout<<P[i]<<"\n";
    // }
    int q;
    cin>>q;
    while(q--){
        int l, r;
        cin>>l>>r;
        l--,r--;
        int ans=0;
       if(l==0){
        ans=P[r];
       }else{
        ans= P[r] - P[l-1];
       }
        cout<<ans<<"\n";
    }


}