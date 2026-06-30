#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n , q;
    cin>>n>>q;
    int a[n];
    
    //input the array's element 
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    while(q--){
        int target;
        cin>>target;
    // implementing the logic
    int index =-1;
    bool flag= false;
    int start =0; 
    int end = sizeof(a)/sizeof(a[0])-1;
    
    while(start <= end){
        int mid = start + (end - start)/2;
        if(a[mid] == target){
            index = mid;
            flag = true;
            break;
        }else if(a[mid] > target){
            start = mid +1; // if the a[mid] is greter then the target
        }else{
            end = mid -1;
        }
    }
        if(flag == true){
        cout<<index+1<<"\n";
        }else{
            cout<<index<<"\n";
        }

    }
}