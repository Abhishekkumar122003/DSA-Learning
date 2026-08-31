#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int MaxDistance=INT_MIN;
    int i=3;
    while(i--){
        int n;
        cin>>n;
        MaxDistance = max(n, MaxDistance);

    }
    cout<<MaxDistance<<"\n";
    
    
    
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