#include<iostream>
using namespace std;
int main(){
    int heighest=INT_MIN;
    int secondhighest = INT_MIN;
    int  arr[10]={1,13,27,17,12,34,56,1,2,17};
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]); i++){
        if(heighest<=arr[i]){
            heighest=arr[i];
        }
        // cout<<"hitere"<<"\n";
    }
    // cout<<heighest;
    for(int i=0; i<sizeof(arr)/sizeof(arr[0]);  i++){
        if(secondhighest<=arr[i] and heighest>arr[i]){
            secondhighest=arr[i];
        }
        // cout<<"hi there"<<"\n";
    }
    cout<<secondhighest;
}