#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    int arr[T];
    for(int i=0; i<T; i++){
        cin>>arr[i];
    };

    //logic for the given task
    for(int i=0; i<T; i++){
        int sum =0; int N=arr[i];
        while(N>0){
            sum+=N%10;
            N/=10;
        };

        if(sum==7){
            cout<<"Thala for a reason"<<"\n";
        }else{
            cout<<"Blocked for no reason \n";
        }
    }
}
