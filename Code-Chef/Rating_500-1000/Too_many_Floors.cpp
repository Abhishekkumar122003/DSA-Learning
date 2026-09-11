#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int x,y;
    cin>>x>>y;
    int i,j;
    if(x%10 ==0){
        i = x/10;
    }else{
        i = x/10+1;
    }
    if(y % 10 ==0){
        j = y/10;
    }else{
        j = y/10 +1;
    }

    if(i == j){
        cout<<0;
    }else{
        cout<<abs(i - j);
    }
    
    cout<<"\n";

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