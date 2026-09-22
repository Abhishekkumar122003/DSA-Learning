#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(){
    float A,B,X,Y;
    cin>>A>>B>>X>>Y;
    float time_chef = A/X;
    float time_chefina = B/Y;
    if(time_chef > time_chefina){
        cout<<"Chefina"<<"\n";
    }else if(time_chef < time_chefina){
        cout<<"Chef"<<"\n";
    }else{
        cout<<"Both"<<"\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}