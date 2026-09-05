#include<iostream>
#include<bits/stdc++.h>
// using namespace std;

 void solve(){
   int a,b,c,d;
   std::cin>>a>>b>>c>>d;
   int answer=std::max(a,b)+std::max(c,d);
   std::cout<<answer<<"\n";
 } 

 int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin>>t;
    while (t--)
    {
      solve();
    }
    
    

 }