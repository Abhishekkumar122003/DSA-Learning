#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){

 
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    int count=0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]+arr[j]==target){
                count++;
            }
        }
    }
    cout<<count<<"\n";
    t--;
       }
}