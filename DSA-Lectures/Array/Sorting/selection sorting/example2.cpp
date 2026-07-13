#include<iostream>
using namespace std;
int main(){
    int arr[1000];
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    cout<<"Enter the element of an Array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //for sorting using selection sorting
    for(int round=0; round<n-1; round++){
        int index=round;
        //for findig the sammllest element in array
        for(int j=round+1; j<n;j++){
            if(arr[index]<arr[j]){
                index=j;
            }
        }

        swap(arr[round], arr[index]);
    }

    // Print all the sorted array
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"\n";
    }
    
}