#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n, tar;
    cin>>n>>tar;
    // int p[n];
    set<int> st;
    int sum =0;
    for(int i=0; i<n; i++){
        int k;
        cin>>k;
        sum+=k;
        // p[i]=sum;
        st.insert(sum);
    }
    // for(int val : st){
    //     cout<<val<<" ";
    // }
    if(st.find(tar) != st.end()){
        cout<<"YES";
    }else{
        cout<<"NO";
    }


}