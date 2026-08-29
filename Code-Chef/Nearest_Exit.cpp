#include<iostream>
#include<bits/stdc++.h>

using namespace std;


void addedProblem(){
    int seat;
    cin>>seat;
    int left=seat-1;
    int right=100-seat;
    if(left < right){
        cout<<"LEFT"<<endl;
    }else{
        cout<<"RIGHT"<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        addedProblem();
    }
}