#include<iostream>
using namespace std;
int main(){
    long long n;
    cin>>n;
    int count=0;
    if(n  == 0){
        cout<<1;
    }else{
        while(n>0){
            if(n%10 ==0){
                count++;
            }
            n/=10;
        }
         cout<<count;
    }
   
}