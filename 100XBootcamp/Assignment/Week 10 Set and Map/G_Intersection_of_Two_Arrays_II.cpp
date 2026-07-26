#include<iostream>
#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    int n , m;
    cin>>n;
    //step 1 just stored the key value pair
    unordered_map<int , int> mp;
  for(int i=1; i<=n; i++){
    int num;
    cin>>num;
    if(mp.find(num) != mp.end()){
        mp[num]++;
    }else{
        mp[num]=1;
    }
  }
  
  // compaire the key of B's arrays element if present in map-> vec.push_back() and decrease it' frequency by 1 => if-> greater the 0; else=> do nothing
  cin>>m;
  vector<int> vec;
  for(int i=1; i<=m; i++){
    int num;
    cin>>num;
    if(mp.find(num) != mp.end()){
        if(mp[num]>0){
            vec.push_back(num);
            mp[num]--;
        }
    }
  }
//    store the vec size for the frequency of the intersection ans sort the "vec" the print the element
  int k= vec.size();
  cout<<k<<"\n";
  sort(vec.begin() , vec.end());
  for(auto x: vec){
    cout<<x<<" ";
  }
}