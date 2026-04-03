#include<iostream>
#include<climits>
#include<cmath>
using namespace std;
int main(){
    int N;
    cin>>N;
    int arr[N];
    for(int i=0; i<N; i++){
        cin>>arr[i];
    };

    int Max =INT_MIN;
    int MIN =INT_MAX;
    int Avg=0;
    int TAmount=0;
    for(int i=0; i<N; i++){
         TAmount += arr[i];
        if(Max < arr[i]){
            Max = arr[i];
        }
        if(MIN > arr[i]){
            MIN = arr[i];
        }
    }
    Avg = TAmount/N;
    cout<< TAmount<<" "<<Max<<" "<<MIN<<" "<<Avg;

}