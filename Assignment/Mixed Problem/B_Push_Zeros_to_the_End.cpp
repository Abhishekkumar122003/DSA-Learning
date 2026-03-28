#include<iostream>
using namespace std;
void pushZero(){
    int  n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    };
    
    // let count all 0
    int count =0;
    for(int i=0; i<n; i++){
        if(arr[i] == 0){
            count++;
        }
    };
    //print all digit except 0's
    for(int i=0; i<n; i++){
        if(arr[i]!=0){
           cout<<arr[i]<<" ";
        }
    }
    //Now print the 0's count numnbers of time 
    for(int i=0; i<count; i++){
        cout<<0<<" ";
    }
    cout<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t>0){
        pushZero();
        t--;
    }
}