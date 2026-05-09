#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    // if(a>b){
    //     int hcf;
    //     for(int i=1; i<=a; i++){
    //         if(a%i==0 and b%i==0){
    //             hcf=i;
    //         }
    //     }
    //         cout<<hcf;
    // }else if(b>a){
    //     int hcf;
    //     for(int i=1; i<=b; i++){
    //         if(a%i==0 and b%i==0){
    //             hcf=i;
    //         }
    //     }
    //     cout<<hcf;
    // }else{
    //     cout<<a;
    // }


// much faster method o(logn)
        int temp;
        while(b!=0){
             temp = a%b;
            a=b;
            b=temp;
        }
    cout<<a;

}