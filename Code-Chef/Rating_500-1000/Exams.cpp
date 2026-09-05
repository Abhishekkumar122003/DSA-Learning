#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
 void pass(){
    int x,y,z;
    cin>>x>>y>>z;

    int num=x*y;

    if(num/2 < z){
        cout<<"YES"<<"\n";
    }else{
        cout<<"NO"<<"\n";
    }
 }

int main(){
    int t;
    cin>>t;
    while(t--){
        pass();
    }
}