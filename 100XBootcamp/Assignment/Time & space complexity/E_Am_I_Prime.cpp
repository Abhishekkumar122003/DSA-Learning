#include<iostream>
using namespace std;
int main(){
    long long n;
    cin>>n;
    bool flag=true;
    // for(long long i=2;i<n;i++){
    //     if(n%i==0){
    //        flag=false;
    //         break;
    //     }
    // }
    // if(flag==true){
    //     cout<<"YES";
    // }else{
    //     cout<<"NO";
    // }
    
    // ****** optimized method *********
    if(n==1){
        cout<<"NO";
        return 0;
    }
    for(long long i=2; i*i<=n; i++){
        if(n%i==0){
            flag=false;
            break;
        }
    }
    if(flag==true){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}