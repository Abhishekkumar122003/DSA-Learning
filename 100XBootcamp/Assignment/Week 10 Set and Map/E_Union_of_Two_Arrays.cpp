#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
 int n;
 cin>>n;
 set<int> st;
 for(int i=0; i<n; i++){
    int n;
    cin>>n;
    st.insert(n);
 }
 int m;
 cin>>m;
 for(int i=0; i<m;i++){
    int n;
    cin>>n;
    st.insert(n);
 }
 int k = st.size();
 if(k == 0){
    cout<<0<<"\n";
 }else{
    cout<<k<<"\n";
    for(auto x : st){
        cout<< x <<" ";
    }
 }
}