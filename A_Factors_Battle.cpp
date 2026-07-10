#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int a , b;
    cin>>a>>b;
    int count_a=0;
    int count_b=0;
    for(int i=1; i*i<=a; i++){
        if(a%i==0){

            //check if i*i<a count+=2
            //else count++;
            if(i*i< a){
                count_a +=2;
            }else{
                count_a++;
            }

        }
    }
    for(int i=1; i*i<=b; i++){
        if(b%i==0){

            //check if i*i<a count+=2
            //else count++;
            if(i*i< b){
                count_b +=2;
            }else{
                count_b++;
            }

        }
    }
    // cout<<count_b;
    // cout<<count_a<<" "<<count_b;
    if(count_a == count_b){
        cout<<"DRAW";
    }else if(count_a > count_b){
        cout<<"A";
    }else {
        cout<<"B";
    }
}