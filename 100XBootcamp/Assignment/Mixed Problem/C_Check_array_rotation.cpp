#include<iostream>
using namespace std;

void rotate(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    //to check the value of  "K" to which array is rotate to right(last index element move -> first index)
    //what we can do is check from last index to first is it sorted or not in decreasing order or not
    // if(arr[i]> arr[i-1]){
    // ok
    //} else{index = i break}
    int index=-1; 
    for(int i=n-1; i>0; i--){
        if(arr[i]<arr[i-1]){
            index=i;
            break;
        }
    }
    if(index == -1){
        cout<<0<<"\n";
    }else{
    cout<<index<<"\n";
    }
}

int main(){
    
    int t;
    cin>>t;
    while(t>0){
        rotate();
        t--;
    }
}