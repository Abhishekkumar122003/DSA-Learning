#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: "; //find the nth element of fibonacci series;
    cin>>n;
    int arr[1000];
    //first =0;
    //second =0;
    arr[0]=0;
    arr[1]=1;
    
    for(int i=2; i<=n-1; i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    cout<<arr[n-1];

}