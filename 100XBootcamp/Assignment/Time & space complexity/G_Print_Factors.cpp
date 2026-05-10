#include<iostream>
#include<vector>
using namespace std;
int main(){
    long long n;
    cin>>n;
    vector<long long>arr;
    
    for(long long i=1; i*i<=n; i++){
        if(n%i==0){
            cout<<i<<" ";
            if(i*i==n){
                continue;
            }else{
            arr.push_back(n/i);
            }
        }
    }
    // cout<<arr.size();
    long long z =arr.size();
    while(z--){
        cout<<arr[z]<<" ";
    }
    // for(long long i =arr.size()-1; i>=0; i--){
    //     cout<<arr[i]<<" ";
    // }
   
}