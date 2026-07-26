 #include<iostream>
 #include<bits/stdc++.h>
 #define int long long
 using namespace std;
 signed main(){
    int n, target;
    cin>>n>>target;
    map<int , int>mp;
    int pre_sum=0;
    for(int i=1; i<=n; i++){
        int num;
        cin>>num;
        pre_sum += num;
        //check pre_sum==target l==1 and R==current i and return from exicution
        if(pre_sum == target){
            cout<<1<<" "<<i;
            return NULL;
        }

        //check is req present in map
        int req = pre_sum - target;
        if(mp.find(req) != mp.end()){
            cout<<mp[req]+1<<" "<<i;
            return NULL;
        }
        mp[pre_sum]=i;
    }

    cout<<-1;
    return NULL;
 }