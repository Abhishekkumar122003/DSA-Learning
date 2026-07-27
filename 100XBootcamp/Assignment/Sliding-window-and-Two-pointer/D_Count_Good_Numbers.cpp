#include<iostream>
#include<bits/stdc++.h>
#define int long long 
using namespace std;
signed main(){
 int n , m, k;
 cin>>n>>m>>k;
 int a[n];
 set<int> st;
 for(int i=0; i<n; i++){
    cin>>a[i];
 }
 for(int i=1; i<=m; i++){
    int num;
    cin>>num;
    st.insert(num);
 }
 //check for window size=>k
 int counter =0;
 for(int i=0; i<k; i++){
    if(st.find(a[i]) != st.end()){
        counter++;
    }
 }
 cout<<counter<<" ";
//  counter--;
 int left=0 , right=k;
 while(right<n){
     if(st.find(a[left]) != st.end()){
       counter--;
     }
    if(st.find(a[right]) != st.end()){
        counter++;
    }
    cout<<counter<<" ";
    left++ , right++;
 }
    
}