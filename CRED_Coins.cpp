#include<iostream>
#include<bits/stdc++.h>
using namespace std;

 void bought_bag(){
    int earnCoin, time_transaction;
    cin>>earnCoin>>time_transaction;

    int numberBag = earnCoin*time_transaction;
    cout<<numberBag/100<<"\n";
 }

int main(){
    int t;
    cin>>t;
    while(t--){
        bought_bag();
    }
}