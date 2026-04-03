#include<iostream>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long arr[n][n];
    for(int i =0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    };

    long long D1 =0; long long D2=0;
    long long total =0;

    for(int i =0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j){
                D1 +=arr[i][j];
            }else if(i+j ==n-1 and i!=j){
                D2 +=arr[i][j];
            }
        }
    };
    long long sumOfDai= D1 + D2;
    cout<<sumOfDai<<" ";

     for(int i =0; i<n; i++){
        for(int j=0; j<n; j++){
           total +=arr[i][j];
        }
    };
     
    long long nonDai = total - sumOfDai ;
    cout<<nonDai;


}