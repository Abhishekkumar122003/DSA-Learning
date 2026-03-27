#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[600];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // Insertion sort logic implementation
    int pass = 1;
    for(int i=0; i<n; i++){
        int shift=0;

        for(int j = i; j>0; j--){
            if(arr[j] < arr[j-1]){
                swap(arr[j] , arr[j-1]);
                shift++;
            }else{
                break;
            }
        };
        // given format logic implimentation after each pass
        if(i>=1){
            int passed = pass-1;
        cout<<"Pass "<<passed<<": ";
        for(int j=0; j<n; j++){
            cout<<arr[j]<<" ";
        };
        cout<<", ";
        
        //sorted part
        for(int j=0; j<=i; j++){
            cout<<arr[j]<<" ";
        };
        cout<<"| ";
        
        //unsorted part
        for(int j= i+1; j<n; j++){
            cout<<arr[j]<<" ";
        };
        cout<<", "<<"shift = "<<passed<<"\n";
        shift++;}else{
            continue;
        }
    }
}