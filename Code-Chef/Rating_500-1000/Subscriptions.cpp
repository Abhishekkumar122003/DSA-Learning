#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int N, rupee;
    cin>>N>>rupee;

    int Poeple_count=0; 
    int totall_Price=rupee;


    // for(int i=1; i<=N; i++){
    //     Poeple_count++;
        
    //     if(Poeple_count > 6){
    //         Poeple_count = 1;
    //         totall_Price += rupee;
    //     }
    // }

    // more efficient in Order of (1)
    totall_Price = rupee * (N/6);
    if(N%6 != 0){
        totall_Price +=rupee;
    }
    cout<<totall_Price<<"\n";
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