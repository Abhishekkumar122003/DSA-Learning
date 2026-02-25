#include<iostream>
using namespace std;
int main(){
    // int arr[6]={10,8,2,3,1,4};
    //if question tell you that array size don't surpass 1000
    int arr[1000];
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;
    cout<<"Enter the element of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
 
    
    //for iterate or number of time/round to find the sllamlest element
    for(int i=0; i<n-1; i++){
        int index=i;
        //for finding the smallest element
        for(int j=i+1; j<n; j++){
            if(arr[index]>arr[j]){
                index=j;
            }
        }
        swap(arr[i],arr[index]);
    }
    cout<<"the sorted array: \n ";
    for(int k=0;k<n;k++){
        cout<<arr[k]<<"\n";
    }
}