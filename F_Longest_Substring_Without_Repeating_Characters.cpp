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

        if(st.find(s[right]) != st.end()){

            while(st.size() >0){
                st.erase(s[left]);
                left++;
            }
        }else{
            st.insert(s[right]);
        }
        max_length = max(max_length , right - left + 1);

    }
    cout<<max_length;
    

}