#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    //applying slection sort
    for(int i=0; i<n-1; i++){
        int index = i;
        for(int j= i+1; j<n; j++){
            if(arr[index] > arr[j]){
                index = j;
            }
        };
        swap(arr[i] , arr[index]);
        cout<<"Pass "<<i+1<<": ";
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        };
        cout<<", "<<"min_selected = "<<arr[i]<<"\n";
    }
}