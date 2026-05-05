#include<iostream>
using namespace std;
int main(){
    long long n;
    cin>>n;
    int count=0;
    for(long long i=1; i*i<=n; i++){
        if(n%i==0){
            if(i*i==n){
                count++;
            }else{
                count+=2;
            }
        }
    }
    cout<<count;
}