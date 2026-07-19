#include<iostream>
using namespace std;
int main(){
    int n;
    int A[n+1] , B[n+1];

    for(int i=1; i<=n; i++){
        cin>>A[i];
    }
    for(int i=1; i<=n; i++){
        cin>>B[i];
    }
    for(int i=1; i<=n;i++){
        if(B[A[i]] == i){
            flag= true;
        }
    }
}