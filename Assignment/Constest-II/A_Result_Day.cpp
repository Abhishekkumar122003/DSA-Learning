#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int passingMarks;
    cin>>passingMarks;

    int pass =0;
    int fail =0;
    for(int i=0; i<n; i++){
        if(arr[i] >= passingMarks){
            pass++;
        }else{
            fail++;
        }
    };
    cout<<"Pass: "<<pass<<"\n"<<"Fail: "<<fail;
}