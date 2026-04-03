#include<iostream>
using namespace std;
void cal(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        int count=0;
        for(int j=i+1; j<n;j++ ){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count == 0){
            cout<<arr[i];
            break;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t>0){
        cal();
        t--;
    }
}