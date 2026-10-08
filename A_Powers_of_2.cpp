#include<iostream>
#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve(int n);
void solve(int n){
   unsigned int cur=1;
    while (cur <= n)
    {
        cout<<cur<<" ";
        cur <<=1;
    }
    
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    solve(n);
}