#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        for(int sp=1; sp<=2*(n-i); sp++){
            cout<<" ";
        }
        for(int k=1; k<=i; k++){
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int i=n-1; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        for(int sp=1; sp<=2*(n-i); sp++){
            cout<<" ";
        }
        for(int k=1; k<=i; k++){
            cout<<"*";
        }
        cout<<"\n";
    }
}