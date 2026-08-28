#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int even_weapon=0;
    int odd_weapon=0;
    for(int i=1; i<=n; i++){
        int num;
        cin>>num;
        if(num%2 == 0){
            even_weapon++;
        }else{
            odd_weapon++;
        }
    }
    if(even_weapon > odd_weapon){
        cout<<"READY FOR BATTLE";
    }else{
        cout<<"NOT READY";
    }
}