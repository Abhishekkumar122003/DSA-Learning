#include<iostream>
#include<bits/stdc++.h>
// #define int long long
using namespace std;
// void factors(int b){
//     //implementing the factorial logic
//     for(int i=1; i<=b; i++){
//         int num=i;
        
//         int j=1;
//         while(j*j<=num){
//             if(num%j==0){
//                 cout<<j<<" ";
//             }
//             j++;
//         }
//         j--;
//         while(j>=1){
//             if(num%j ==0){
//                 if(num/j != j){
//                     cout<<num/j<<" ";
//                 }
//             }
//             j--;
//         }

//         cout<<"\n";
//     }
// 
void factors(int b){
    vector<int> factor[b+1];
    for(int i=1; i<=b; i++){
        for(int j=i; j<=b; j+=i){
            //if "i" is factor of "j" push 'i' into factor[j]
            if(j%i==0){
                factor[j].push_back(i);
        }
        }
    }
    for(int i=1; i<=b; i++){
       for(int x: factor[i]){
        cout<<x<<" ";
       }
       cout<<"\n";
    }
}
signed main(){
    int n;
    cin>>n;
    factors(n);
}