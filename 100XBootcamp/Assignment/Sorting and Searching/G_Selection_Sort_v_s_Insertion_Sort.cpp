#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int A[n];
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    int B[n];
    for(int i=0; i<n;i++){
        B[i]=A[i];
    };

    //selection sort
    int swaps=0;
    for(int i=0; i<n; i++){
        int index=i;
        for(int j= i+1; j<n; j++){
            if(A[index]>A[j]){
                index=j;
            }
        }
        if(A[i] > A[index]){
            swap(A[i] , A[index]);
            swaps++;
        }
    }

    //insertion sort
    int shifts=0;
    for(int i=1; i<n; i++){
        int temp=B[i];
        int j=i-1;
        while(j>=0 and B[j]>temp){
            B[j+1] = B[j];
            shifts++;
            j--;
        }
        B[j+1]=temp;
    }

    if(swaps == shifts){
        cout<<"Tie"<<"\n";
    }else if(swaps < shifts){
        cout<<"Selection Sort"<<"\n";
        }else{
            cout<<"Insertion Sort"<<"\n";
        }

        }
}