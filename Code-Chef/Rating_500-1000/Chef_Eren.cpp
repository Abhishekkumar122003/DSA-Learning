#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int N, A,B;
    cin>>N>>A>>B;
    if(N%2 == 0){
        int num_of_A=N/2;
        int num_of_B=N/2;
        cout<<num_of_A* A+num_of_B*B;
        cout<<endl;
    }else{
       if(N == 1){
        cout<<B<<endl;
       }else{
        int num_of_A=N/2;
        int num_of_B=N/2+1;
        cout<<num_of_A*A+num_of_B*B;
        cout<<endl;
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