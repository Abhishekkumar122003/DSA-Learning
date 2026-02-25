#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int temp=arr[4];
    // cout<<temp;
    for(int i=5; i>0; i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
    for(int i=0; i<5; i++){
        cout<<arr[i]<<"\n";
    }
}