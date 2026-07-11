#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n;
    cin>>n;
    set<int> st;
    for(int i=1; i<=n; i++){
        int num;
        cin>>num;
        st.insert(num);
        cout<<st.size()<<" ";
    }
}