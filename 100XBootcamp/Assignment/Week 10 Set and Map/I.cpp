#include<bits/stdc++.h>
#include<iostream>
#define int long long
using namespace std;
bool checkpairsum(){
     int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
        set<int> st;
        for(int i=0; i<n; i++){
        int req = x-a[i];
        if(st.find(req)!= st.end()){
            return true;
        }
        st.insert(a[i]);
    }
    return false;
    }
signed main(){
   

    
    if(checkpairsum()){
        cout<<"TRUE";
    }else{
        cout<<"FALSE";
    }
}