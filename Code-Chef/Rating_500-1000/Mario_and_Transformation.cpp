#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string A[101];
void pre(){
    for(int i=3; i<=100; i+=3){
        A[i]= "NORMAL";
    }
    for(int i=1; i<=100; i+=3){
        A[i]="HUGE";
    }
    for(int i=2; i<=100; i+=3){
        A[i]="SMALL";
    }
}
void solve(){
    int x;
    cin>>x;
    cout<<A[x]<<"\n";
    
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