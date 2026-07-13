#include<iostream>
using namespace std;
int main(){
    int  arr[1000];
    int  n;
    cout<<"Enter the number of element's tha Array can have: ";
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    };

    // Now implementing Bubble Sort
    for(int i =n-2; i>=0; i--){
        bool isSwap=false;
        for(int j=0; j<=i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
                isSwap = true;
            }
        };
        if(isSwap == false){
            break;
        }
    };

    for(int i=0; i<n; i++){
        cout<<arr[i];
        cout<<"\n";
    }
}