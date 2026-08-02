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
    int left=0, max_length=0 ;
    map<char ,int> mp;
    // cout<<mp.size();
    for(int right=0; right<n; right++){
        mp[s[right]]++;
        //if mp.soze()>k
    

            while(mp.size()>k){
                
                    mp[s[left]]--;
                
                //mp[s[left]]==0, so removed it from map
                if(mp[s[left]]==0){
                    mp.erase(s[left]);
                }
                left++;
            }
        
        max_length= max(max_length , right -left +1);
    }
    cout<<max_length;
}