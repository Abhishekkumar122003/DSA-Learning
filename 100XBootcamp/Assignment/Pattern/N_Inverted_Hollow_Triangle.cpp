#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=n; i>=1; i--){
        //for space
        for(int j=1; j<=(n-i); j++ ){
            cout<<" ";
        }
        //for star
        for(int k=1; k<=i; k++){
            if(i==1 or i==n or k==1 or k==i){
                if(k==i){
                cout<<"*";
            }else{
                cout<<"* ";
            }
            }else{
                cout<<"  ";
            }
        }
        cout<<"\n";
    }
}