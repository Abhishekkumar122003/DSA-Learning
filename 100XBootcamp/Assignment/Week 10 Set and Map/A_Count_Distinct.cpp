#include<iostream>
#include<set>
#define int long long
using namespace std;
signed main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    set<int>sets;
    for(int i=0; i<n; i++){
        sets.insert(a[i]);
    }
  
    cout<<sets.size();
}