#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int N;
    cin>>N;
    if(N%4 == 0){
        cout<<"Good"<<"\n";
    }else{
        cout<<"Not Good"<<endl;
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