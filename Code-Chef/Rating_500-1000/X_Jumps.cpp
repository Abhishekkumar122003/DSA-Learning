#include<iostream>
#include<cmath>
using namespace std;
 void solve(){
    int x,y;
    cin>>x>>y;
    int step;
    if(x==y){
        cout<<1;
    }else if(x > y){
        if(x % y ==0){
            step = x/y;
        }else {
            step = x/y;
            step += x - (step * y);
        }
        cout<<step;
    }else{
        cout<<x;
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