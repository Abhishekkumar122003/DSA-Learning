#include<iostream>
#include<bits/stdc++.h>

using namespace std;


void addedProblem(){
    int A,B,C;
    cin>>A>>B>>C;
    if(A <= B && C <= B){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
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