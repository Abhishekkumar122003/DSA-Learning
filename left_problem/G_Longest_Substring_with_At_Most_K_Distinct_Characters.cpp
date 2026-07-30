#include<iostream>
#include<bits/stdc++.h>
#define int long long 
using namespace std;
signed main(){
    int n,k;
    
    cin>>n>>k;
    if(n==1 && k==1){
        cout<<1;
        return NULL;
    }
    
    string s;
    cin>>s;
    set<int> st;
    int left=0, max_length=0 , length=0;
    for(int right=0; right<n; right++){
        if(st.find(s[right]) != st.end()){
            if(st.size() <=k){
                length=right - left +1;
            }else{
                while(st.find(s[right]) != st.end()){
                    st.erase(s[left]);
                    left++;
                    length=right - left +1;
                }
                st.insert(s[right]);
                // length=st.size();
            }
        }else{
            st.insert(s[right]);
        }
        max_length=max(max_length , length);
    }
    cout<<max_length;
}