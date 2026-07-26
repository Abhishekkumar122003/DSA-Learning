#include<iostream>
#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    int n, x;
    cin>>n>>x;
    map<int , int> mp;
    int target;
    int second_occurence;
    bool flag= false;
    for(int i=1; i<=n; i++){
        int num;
        cin>>num;
        target =x-num;
        if(mp.find(target) != mp.end()){
            second_occurence=i;
            flag = true;
            break;
        }
        if(mp.find(num) != mp.end()){
            mp[num] =i;
        }else{
            mp[num] =i;
        }
    }

    if(flag == true){
        cout<<mp[target]<<" "<<second_occurence;
    }else{
        cout<<-1;
    }
}