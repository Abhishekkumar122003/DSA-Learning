#include<iostream>
using namespace std;
int main(){
    int N=10;
    int arr[N-1]={1,10,2,3,5,4,6,7,8};
    //sum of array's element;
    int sum=0;
    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        sum=sum+arr[i];
    }

    //sum of N number;
    int sumn=0;
    for(int i=0; i<=N;  i++){
        sumn+=i;
    }
    cout<<sum<<"\n"<<sumn;
    int missingnum=sumn-sum;
    cout<<endl<<missingnum;
}