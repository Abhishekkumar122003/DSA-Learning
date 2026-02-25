#include<iostream>
using namespace std;
int main(){
   
    int row , col;
    cin>>row>>col;
    //a a a a
    //b b b b 
    //c c c c 
    //d d d d
    for(int i =1; i<=row; i++){
         char charec='a';
        for(int j=1; j<=col; j++){
            // cout<<charec<<" ";
            
        }
        // cout<<"\n";
        // charec++;
        for(int j=1; j<=col; j++){
            cout<<charec<<" ";
            charec++;
        }
        cout<<"\n";
    }
}