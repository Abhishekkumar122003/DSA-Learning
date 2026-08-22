#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int N=1E6;
bool A[N +1];
void pre_compute(){
    for(int i=2; i<=N; i++){
           if(A[i]){ 
            for(int j=2*i; j<=N; j+=i){
                A[j]=false;
            
        }}
    }
}
void isPrime(){
    int n;
    cin>>n;
    int countPrime=0;
    for(int i=1; i<=n; i++){
        if(A[i]){
            cout<<i<<" ";
            countPrime++;
        }
    }
    cout<<"\n"<<countPrime;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    fill(A, A+N+1, true);
    A[0]=false,A[1]=false;
    pre_compute();
    isPrime();

    
}