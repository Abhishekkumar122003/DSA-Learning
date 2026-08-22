#include<iostream>
#define int long long
using namespace std;
void factors(int b){
    //implementing the factorial logic
    for(int i=1; i<=b; i++){
        int num=i;
        
        int j=1;
        while(j*j<=num){
            if(num%j==0){
                cout<<j<<" ";
            }
            j++;
        }
        j--;
        while(j>=1){
            if(num%j ==0){
                if(num/j != j){
                    cout<<num/j<<" ";
                }
            }
            j--;
        }

        cout<<"\n";
    }
}
signed main(){
    int n;
    cin>>n;
    factors(n);
}