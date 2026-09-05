#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int N;
    cin>>N;
    int totalCar;
    totalCar = N/4;
    if(N%4 != 0){
        totalCar++;
    }
    cout<<totalCar<<"\n";
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