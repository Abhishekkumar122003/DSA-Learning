#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int X,A,B;
    cin>>X>>A>>B;
    if(A + B*2 >= X){
        cout<<"Qualify"<<"\n";
    }else{
        cout<<"NotQualify"<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
}