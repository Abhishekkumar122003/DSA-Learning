#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
        vector<int> vec;
    int q;
    cin>>q;
    for(int i=0; i<n;i++){
        int num;
        cin>>num;
        vec.push_back(num);
    }
    while(q--){
        int target_value;
        cin>>target_value;
        auto it = find(vec.begin(), vec.end(), target_value);
        if(it != vec.end()){
            vec.erase(it);
            vec.push_back(target_value);
        }

    }
    for(auto i: vec){
        cout<<i<<" ";
    }


}