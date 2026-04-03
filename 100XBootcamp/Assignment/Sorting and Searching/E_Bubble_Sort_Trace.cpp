#include<iostream>
using namespace std;
int main(){
    int n;
    int arr[1000];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    //implementing Bubble sort
    int pass =1;
    for(int i=n-2; i>=0; i--){
        
        int numOfPass =0;
        bool isSwaped =false;
        for(int j=0; j<=i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
                isSwaped = true;
                numOfPass ++;
            }
          };
          cout<<"Pass "<<pass<<": ";
        for(int i=0; i<n; i++){
          cout<<arr[i]<<" ";
        };
        cout<<", "<<"swaps = "<<numOfPass<<"\n";

        if(isSwaped == false){
            break;
        }
        pass +=1;
    }

    // now implementing the OutPut forment
    
}