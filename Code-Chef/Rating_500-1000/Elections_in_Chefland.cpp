#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int N,X;
    cin>>N>>X;
    int count=0;
    while (N>=1)
    {
        int age;
        cin>>age;
        if(age >= X){
            count++;
        }

        N--;
    }
    cout<<count<<"\n";
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