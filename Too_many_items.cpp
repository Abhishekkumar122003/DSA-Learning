#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int N;
    cin>>N;
    int num_bags= N/10;
    if(N%10 !=0){
        num_bags++;
    }
    cout<<num_bags<<"\n";
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