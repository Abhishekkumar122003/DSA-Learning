#include<iostream>
using namespace std;
int main(){
    int n;
    long long target ;
    cin>>n>>target;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    };
    int count=0;
    for(int j=0; j<n; j++){
   for(int i=j; i<n-1; i++){
    int sum =arr[i] + arr[i+1]; 
    if(sum == target){
        count++;
    }
   }
   }
    cout<<count;
}       