#include<iostream>
using namespace std;
int main(){
    //1st method to create Array
    int name[5]={1,2,3,4,5};
    // for(int i=0;i<=5;i++){
    //     cout<<name[i]<<"\n";
    // }
    //2nd method to create Array
    int name1[]={1,2,3,4,5,6};
    //3rd method to create Array
    int name2[10];
    // for(int i=0;i<10;i++){
    //     cin>>name2[i];
    // }
    // for (int  i = 0; i <= 9; i++)
    // {
    //     cout<<name2[i]<<"\n";
        
    // }

    //How to find SIZE OF AN ARRAY in cpp
    // use "sizeof(ARRAY)"
    //hOw to find total number of element inside the "ARRAY"
    //USE "sizeof(ARRAY)/sizeof(ARRAY[0])"
    int arr[10];
    for(int i=0;i<=sizeof(arr)/sizeof(arr[0]);i++){
        cin>>arr[i];
    }  
    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        cout<<arr[i]<<"\n";
    }  
}