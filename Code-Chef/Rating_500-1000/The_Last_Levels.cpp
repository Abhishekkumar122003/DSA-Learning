#include<iostream>
#include<cmath>
using namespace std;
 void solve(){
    int X,Y,Z;
    cin>>X>>Y>>Z;
    if(X==3){
        cout<<X*Y;
    }else {
        int num ;
        if(X%3!=0){
            num=(X/3)*Z;
        }else{
            num=((X/3)-1)*Z;
        }
        cout<<X*Y +num;
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