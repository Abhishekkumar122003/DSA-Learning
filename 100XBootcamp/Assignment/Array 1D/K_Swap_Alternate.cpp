#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n;i++){
            cin>>arr[i];
        };

        //for alternate swap
        for(int i=1;i<n;i+=2){
            swap(arr[i] , arr[i-1]);
        };

        //print the swaped array
        for(int i=0; i<n; i++){
            cout<<arr[i]<<' ';
        }
        cout<<endl;
        t--;
    }
}