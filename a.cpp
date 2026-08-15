#include<iostream>
using namespace std;
int main(){
   int a[9]={2,5,1,0,3,0,1,2,5};
   for(int i=0; i<9; i++){
    if(i != a[i]){
        while(i!=a[i]){
            cout<<"hi";
            swap(a[i], a[a[i]]);
        }
    }
   }
   for(int i=0; i<9; i++){
    if(i!= a[i]){
        cout<<a[i]<<"\n";
    }
   }
}