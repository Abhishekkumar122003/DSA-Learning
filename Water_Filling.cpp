#include<iostream>
#include<bits/stdc++.h>
using namespace std;

 void waterFill(){
    int emptyBottle=0;
    int i=3;
    while(i--){
        int num;
        cin>>num;
        // cout<<"->"<<num;
        if(num == 0){
            emptyBottle++;
        } 
    }
    if(emptyBottle > 1){
        cout<<"Water filling time"<<"\n";
    }else{
        cout<<"Not now"<<"\n";
    }
    
 }

int main(){
    int t;
    cin>>t;
    while(t--){
        waterFill();
    }
}