#include<iostream>
using namespace std;
#define int long long
signed main(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    
    
    int P[n] ; int sum=0;
    for(int i=0; i<n; i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i'|| str[i]=='o' || str[i]=='u'){
            sum +=1;
            P[i]=sum;
        }else{
            P[i]=sum;
        }
    }
    // for(int i=0; i<n;i++){
    //     cout<<P[i]<<"\n";
    // }
    int q;
    cin>>q;
    while(q--){
        int l ,r;
       
        cin>>l>>r;
        l-- , r--;
        int ans=0;
        if(l ==0){
            ans = P[r]; 
        }else{
            ans = P[r] -P[l-1];
        }
        cout<<ans<<"\n";
    }
}