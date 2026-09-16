#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(){
    float a,x,b,y;
    cin>>a>>x>>b>>y;
    float speed_Alice=a/x;
    float speed_Bab=b/y;
    (speed_Alice == speed_Bab)?cout<<"Equal"<<"\n":(speed_Alice> speed_Bab)?cout<<"Alice"<<endl:cout<<"Bob"<<"\n";

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