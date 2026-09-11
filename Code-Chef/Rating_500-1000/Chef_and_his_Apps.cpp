#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int s,x,y,z;
    cin>>s>>x>>y>>z;
    
    int free_space = s- (x+y);
    int additional_need = z - free_space;
    if(additional_need <= 0){
        cout<<0<<"\n";
    }else if(additional_need <= max(x, y)){
        cout<<1<<"\n";
    }else{
        cout<<2<<endl;
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