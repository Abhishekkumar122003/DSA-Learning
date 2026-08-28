#include<iostream>
#include<bits/stdc++.h>
using namespace std;

 void amountPAy(){
    int X;
    cin>>X;
    if(X <= 100){
        cout<<X<<"\n";
    }else if(100 < X && X <= 1000){
        cout<<X-25<<"\n";
    }else if(1000 < X && X<= 5000){
        cout<<X-100<<"\n";
    }else{
        cout<<X-500<<"\n";
    }
    
 }

 // c++ mai if i doo x=100, and check it in if(10< x <=100)=> it's means first is x>10 =>yes->true(1-return in c++) and then check is 1 <=100->yes->true(1) that's why i have to use operator->AND(&&) here.

int main(){
    int t;
    cin>>t;
    while(t--){
        amountPAy();
    }
}