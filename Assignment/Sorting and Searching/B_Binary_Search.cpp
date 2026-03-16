#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;

    //Binary search;
    int left=0 ;
    int right = sizeof(arr)/sizeof(arr[0]); // number of element present in Array
    // cout<<right;
    bool flag=false;
    while(left<=right){
    int mid = (left + right)/2;
    // cout<<mid;
    
    // chech wheather the "arr[mid] == target, if-> yes then make the "false=true" and break the loop 
    if(arr[mid] == target){
        flag = true;
        break;
    }



    if(arr[mid] > target){  // this mean the target is on the left side
        right = mid-1;
    }else{                  // it means (arr[mid] < target) => which mean the target is on right side from "mid value" element
        left = mid+1;
    }

    };

    if(flag == true){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}