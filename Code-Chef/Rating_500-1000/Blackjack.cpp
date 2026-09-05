#include<iostream>
#include<cmath>
using namespace std;
 void solve(){
    int A,B;
    cin>>A>>B;
    int reqNum = 21-(A+B);
    if(reqNum>10){
        cout<<-1;
    }else{
        cout<<reqNum;
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