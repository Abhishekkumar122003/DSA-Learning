#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long 
signed main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    // cout<<s;
    set<int> st;
    int left=0 , right=0, max_length=0;
    for(right=0; right<n; right++){
        // cout<<st.size()<<"\n"<<"st"<<"\n";
        if(st.find(s[right]) != st.end()){
        while(st.find(s[right]) != st.end()){
            st.erase(s[left]);
            left++;
        // cout<<st.size()<<"\n"<<"er"<<"\n";

        }
         st.insert(s[right]);
        }else{
            st.insert(s[right]);
        // cout<<st.size()<<"\n"<<"insert"<<"\n";

        }
        // max_length = max(max_length , st.size());
        if(max_length < st.size()){
            max_length=st.size();
        }

    }
    cout<<max_length;


}