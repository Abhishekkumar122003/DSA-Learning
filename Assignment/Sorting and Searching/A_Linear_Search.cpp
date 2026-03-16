#include<iostream>
using namespace std;
 int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    };
    //Linear seacrch
    int target;
    cin>>target;
    
    bool flag = false;
    

    for(int i=0; i<n; i++){
        if(arr[i] == target){
            flag=true;
            
        };
    };
  
    if(flag == true){
        cout<<"YES";
    }else{
        cout<<"NO";
    }


 }