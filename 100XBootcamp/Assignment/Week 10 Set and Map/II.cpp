#include<bits/stdc++.h>
#include<iostream>
#define int long long
using namespace std;
signed main(){
    int q;
    cin>>q;
    map<int , int> mp;
    while(q--){
        int typ;
        cin>>typ;
        if(typ == 1){
            int num;
            cin>>num;
            mp[num]++;
        }else if(typ == 2){
            int num;
            cin>>num;
            if(mp.find(num)!= mp.end()){
              mp[num]--;
              if(mp[num] == 0){
                mp.erase(num);
              }  
            }
           
         
        }else if(typ == 3){
            cout<<mp.size()<<"\n";
        }else {
            int num;
            cin>>num;
            if(mp.find(num) != mp.end()){
                cout<<"YES"<<"\n";
            }else{
                cout<<"NO"<<"\n";
            }
        }
    }
}