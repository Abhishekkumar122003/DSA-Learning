#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define int long long
signed main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int m;
    cin>>m;
    set<int>B;
    for(int i=0; i<m; i++){
        int num;
        cin>>num;
        B.insert(num);
    }
    set<int>ans ;
    for(int i=0; i<n; i++){
        if(B.find(a[i]) != B.end()){
            ans.insert(a[i]);
        }
    }
    int k= ans.size();
    cout<<k<<"\n";
    for(auto x : ans){
        cout<<x<<" ";
    }
    

}