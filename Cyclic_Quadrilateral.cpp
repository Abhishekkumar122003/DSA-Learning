#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(){

    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int op_angle= a + c;
    int op_angle1=b + d;
    if(op_angle1 == 180 && op_angle == 180){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<"\n";
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