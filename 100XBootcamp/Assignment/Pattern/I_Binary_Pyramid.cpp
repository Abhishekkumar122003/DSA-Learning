#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
       int start;
       if(i%2==0){
        start=1;
       }else{
        start=0;
       }
       for(int j=1; j<=i; j++){
        cout<<start;
        if(start==0){
            start=1;
        }else{
            start=0;
        }
       }
       cout<<"\n";
    }
}