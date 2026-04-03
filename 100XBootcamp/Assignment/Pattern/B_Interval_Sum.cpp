#include<iostream>
using namespace std;
int main(){
    int q;
    cin>>q;
    while(q>0){
        int l, r;
        cin>>l>>r;
        int sum=0;
        for(int i=1; i<r; i++){
            sum = sum+ l+i;
        }
        sum==sum+r;
        cout<<sum<<"\n";
        q--;
    }
}