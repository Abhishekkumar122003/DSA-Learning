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
    int p[n];
    int ans = 0;
    for(int i=0; i<n; i++){ 
        ans += a[i];
        p[i] = ans;
    }
    for(int l=0; l<n; l++){
        for(int r=l; r<n; r++){
            int sum=0;
           if(l==0){
            sum = p[r];
           }else{
            sum = p[r] - p[l-1];
           }
           cout<<sum<<"\n";
           
        }
    }
}