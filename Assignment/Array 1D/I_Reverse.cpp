#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    };
     
    //now for reversing the array
    int i=0 , j=n-1;
    while(i<j){
        swap(arr[i] , arr[j]);
        i++;
        j--;
    }
    //print the reversed array
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}