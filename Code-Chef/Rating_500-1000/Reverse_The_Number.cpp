#include<iostream>
#include<bits/stdc++.h>

using namespace std;


void solve(){
    string num;
    cin>>num;
//     int place=num.size();
//    for(int i=num.size()-1; i>=0; i--){
//      if(num[i] == '0'){
//         place = i;
//      }else{
//         break;
//      }
//    }
//    for(int i=place-1; i>=0; i--){
//     cout<<num[i];
//    }

  //more efficient code using "find_last_not_of()" function
//   int last = num.find_last_not_of('0');
//   for(int i=last; i>=0; i--){
//     cout<<num[i];
//   }

    //more easy way
    num.erase(num.find_last_not_of('0') +1);
    reverse(num.begin(), num.end());
    cout<<num;
 
   cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        solve();
    }
}