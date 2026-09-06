#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int A[n] , B[n];

    int TakashiStoneWeight=0;
    int AokiStoneWeight=0;
    for(int i=0; i<n; i++){
        int num;
        cin>>num;
        A[i]=num;
        TakashiStoneWeight += num*num;
    }
    for(int i=0; i<n; i++){
        int num;
        cin>>num;
        B[i]=num;
        AokiStoneWeight += num*num;
    }
    if(TakashiStoneWeight > AokiStoneWeight){
        cout<<"Yes"<<"\n";
        for(int i=0; i<n; i++){
            cout<<A[i]<<" ";
        }
    }else{
        cout<<"No";
    }

}