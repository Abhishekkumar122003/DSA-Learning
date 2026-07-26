#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n, tar;
    cin>>n>>tar;
    set<int> st;
    int pre_sum =0;
    for(int i=0; i<n; i++){
        int k;
        cin>>k;
        pre_sum+=k;
        if(pre_sum == tar){
            cout<<"YES";
            return NULL;
        }
        if(st.find(pre_sum - tar) != st.end()){
            cout<<"YES";
            return NULL;
        }
        st.insert(pre_sum);
    }
    cout<<"NO";


}