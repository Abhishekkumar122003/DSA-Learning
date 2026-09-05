#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int N;
    cin>>N;
    if(N<16){ // Lower Deck
        if(N>=1 && N<=10){
            cout<<"Lower Double"<<"\n";
        }else
        {
            cout<<"Lower Single"<<"\n";
        }
        
    }else{
        if(N>= 16 && N<= 25){
            cout<<"Upper Double"<<"\n";
        }else{
            cout<<"Upper Single"<<"\n";
        }
    }
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
}