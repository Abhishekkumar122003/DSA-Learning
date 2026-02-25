#include<iostream>
using namespace std;
int main(){
    //1111
    //2222
    //3333
    //4444
    int row , col;
    cin>>row>>col;
    for(int i=1; i<=row; i++){
        for(int j=1;j<=col;j++){
            // cout<<i;
          
        }
        // cout<<"\n";
        for(int j=1;j<=col;j++){
           //12345
           //12345
           //12345
           //12345
            // cout<<j;
        }
        // cout<<"\n";
        for(int j=col;j>=1;j--){
           //54321
           //54321
           //54321
           //54321
            // cout<<j;
        }
        // cout<<"\n";
        //for 1 4 9 16
        //1 4 9 16
        for(int j=1; j<=col;j++){
            cout<<j*j<<" ";
        }
        cout<<"\n";
    }
}