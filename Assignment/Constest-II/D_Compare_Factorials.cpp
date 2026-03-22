#include<iostream>
using namespace std;
int main(){
    long long A ,B;
    cin>>A>>B;
    // if(A==0 and B==0){
    //     cout<<"Yes";
    // }else if(A==0 and B==1){
    //     cout<<"Yes";
    // }else if(A==1 and B==0){
    //     cout<<"Yes";
    // }else{

    //     // comment part is wrong
    //     // int valA=1 , valB=1;
    //     // for(int i=1; i<=A; i++){
    //     //     valA *=i;
    //     // }
    //     // for(int i=1; i<=B; i++){
    //     //     valB *=i;
    //     // }
    //     // if(valA == valB){
    //     //     cout<<"Yes";
    //     // }else{
    //     //     cout<<"No";
    //     // }
    //     if(A==B){
    //         cout<<"Yes";
    //     }else{
    //         cout<<"No";
    //     }
    // }


    //Second way to do the same thing
    if((A == B) || (A==0 && B==1) || (A==1 && B==0)){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
}

  