#include<iostream>
#define int long long
using namespace std;
signed main(){
    int n;
    cin>>n;
    if(n==1){
        cout<<1<<"sdlfnkwes";
        return NULL;
    }
    cout<<1<<" ";
    for(int i=2; i<n; i++){
        int f1 , f2;
        
        for(int j=2; j*j<=i; j++){                                                  
            if(i%j==0){
                f1=j;
                f2=n/j;
                if(f1 == f2){
                    cout<<f1<<" ";
                }else{
                    cout<<f1<<" "<<f2<<" ";
                }
            }
        }
        cout<<"\n";
    }
}