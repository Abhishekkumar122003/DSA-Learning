#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int lar=INT_MIN;
    int seclarg=-1;
    // cout<<lar;
    for(int i=0; i<n; i++){
        if(lar<arr[i]){
            lar=arr[i];
        }
        
    }
    for(int i=0;i<n;i++){
        if(seclarg<arr[i] and lar > arr[i]){
            seclarg=arr[i];
        }
    }
    cout<<seclarg;
}