#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int temp[5];
    int i=0 ,j=4;
    while(j>=0){
        temp[i]=arr[j];
        j--;
        i++;
    }
    for(int k=0;k<5;  k++){
        arr[k]=temp[k];
    }
    for(int k=0;k<5;  k++){
        cout<<arr[k]<<"\n";
        
    }
}