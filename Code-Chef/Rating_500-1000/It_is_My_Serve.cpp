#include<iostream>
#include<bits/stdc++.h>
using namespace std;

    string P[100];

void pre(){
     for(int i=1; i<=100; i+=4){
        P[i]="Alice";
        P[i+1]= "Alice";
    }
    for(int i=3; i<=100; i+=4){
        P[i]="Bob";
        P[i+1]="Bob";
    }

}

void solve(){
    int p,q;
    cin>>p>>q;
    
    cout<<P[p+q+1]<<"\n";
   
    

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    pre();
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}