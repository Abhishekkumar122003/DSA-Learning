#include<iostream>
using namespace std;
int main(){
    int n , k;
    cin>>n>>k;
    k--;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0; i<n; i++){
        if(i<=k){
            sum += arr[i];
        }else{
            break;
        }
    }
    int ans=sum;
    for(int i=0; i<n-1; i++){
        int nu=i+k;
        if(nu<n){
        ans =  arr[nu] + arr[i];
        }
        if(ans>= sum){
            sum = ans;
        }
    }
    cout<<sum;



}