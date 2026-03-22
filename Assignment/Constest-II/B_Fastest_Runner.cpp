#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    //implementing logic
    int timetaken = arr[0];
    int position =0;
    for(int i=1; i<n; i++){
        if(timetaken >= arr[i]){
            timetaken = arr[i];
            position = i+1;
        }
    };
    cout<<position;
}