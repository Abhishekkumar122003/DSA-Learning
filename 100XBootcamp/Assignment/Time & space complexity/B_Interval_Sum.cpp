#include<iostream>
using namespace std;
void call(){
    long long  l , r;
    cin>>l>>r;
    long long  sum=0;
    long long sum2=0;
    if(l==r){
        cout<<l;
        cout<<" \n";
        return;
    }else{
    sum= r*(r+1)/2;
    sum2=(l-1)*(l)/2;
    cout<<sum-sum2<<"\n";
    }
}
int main(){
    int q;
    cin>>q;
    while(q>0){
        call();
        q--;
    }
}