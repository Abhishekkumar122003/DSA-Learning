#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int ob,x,y,z;
    cin>>ob>>x>>y>>z;
    
    if(ob ==x || ob ==y || ob ==z){
        cout<<"YES"<<"\n";
    }else{
        int w1=x+y;
        int w2=y+z;
        int w3=x+z;
        int w4 = x+y+z;
        if(ob==w1 || ob ==w2 || ob==w4 || ob ==w3){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
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