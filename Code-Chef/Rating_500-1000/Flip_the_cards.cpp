#include<iostream>
using namespace std;

void solve(){
    int n,x;
   cin>>n>>x;
   if(n==x || x==0){
    cout<<0<<endl;
   }else if(n>x){
    if(x<n-x){
    cout<<x<<endl;
    }else{
        cout<<n-x<<endl;
    }
   }
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
         solve();
    }
}