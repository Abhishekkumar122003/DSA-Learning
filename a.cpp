#include<iostream>
using namespace std;
int main(){
   int a[9]={2,5,1,0,3,0,1,2,5};
   for(int i=0; i<9; i++){
    int currentele=a[i];
    int ele=a[i];
    if(a[currentele] != ele){
        
            cout<<"hi";
            swap(a[i], a[currentele]);
            i--;
    }
   }
   for(int i=0; i<9; i++){
    if(i!= a[i]){
        cout<<a[i]<<"\n";
    }
   }
}