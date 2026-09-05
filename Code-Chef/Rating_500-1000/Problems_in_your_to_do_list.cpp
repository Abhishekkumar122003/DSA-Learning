#include<iostream>
#include<bits/stdc++.h>

using namespace std;


void addedProblem(){
    int N;
    cin>>N;
    int delete_problem=0;
    while(N--){
        int rating;
        cin>>rating;
        if(rating >= 1000){
            delete_problem++;
        }
    }
    cout<<delete_problem<<endl;
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