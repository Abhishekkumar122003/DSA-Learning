#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int count=0;
    
    for(int i=0; i<n; i++){
        int num;
        cin>>num;
        if(num>=10 && num<= 60){
            count++;
        }
    }
    cout<<count<<"\n";

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