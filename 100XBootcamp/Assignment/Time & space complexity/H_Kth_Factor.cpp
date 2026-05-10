#include<iostream>
#include<vector>
using namespace std;
int main(){
    long long n, k;
    cin>>n>>k;
    vector<long long >arr;
    for(long long i=1; i*i<=n; i++){
        if(n%i==0){
            arr.push_back(i);
            if(i*i==n){
                continue;
            }else{
                arr.push_back(n/i);
            }
        }
    }
    for(long long i =arr.size()-1; i>=1; i--){
        bool flag = false;
        for(long long j=0; j<i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j] , arr[j+1]);
                flag=true;    
            }
            
        }
        if(flag==false){
                break;
            }
    }
    // for(int i=0; i<arr.size(); i++){
    //     cout<<arr[i]<<" ";
    // }
    if(k>arr.size()){
        cout<<-1;
    }else{
    cout<<arr[k-1];
    }
}