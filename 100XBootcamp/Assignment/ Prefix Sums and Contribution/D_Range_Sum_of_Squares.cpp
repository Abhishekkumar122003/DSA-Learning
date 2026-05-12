#include<iostream>
#define int long long
using namespace std;
signed main(){
    int n,q;
    cin>>n>>q;
    int A[n];
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    int P[n];
    int sum=0;
    for(int i=0; i<n; i++){
        sum+= A[i]*A[i];
        P[i] = sum;
    }
    // for(int i=0; i<n; i++){
    //     cout<<P[i]<<"\n" ;
    // }
    while(q--){
        int l,r;
        cin>>l>>r;
        l--,r--;
        int ans = 0 ;
        if(l==0){
            ans = P[r];
        }else{
            ans = P[r] - P[l-1];
        }
        cout<<ans<<"\n";
    }
}