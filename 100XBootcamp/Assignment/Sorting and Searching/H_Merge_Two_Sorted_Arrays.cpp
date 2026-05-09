#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int A[n] , B[m];
    int c[n+m];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    for(int i=0; i<m; i++){
        cin>>B[i];
    }
    int i=0, j=0 , k=0;
    while(i<n and j<m){
        if(A[i]<B[j]){
            c[k]=A[i];
            i++ ;
        }else{
            c[k]=B[j];
            j++;
        }
        k++;
    }

    while(i<n){
        c[k]=A[i];
        i++ , k++;
    }
    while(j<m){
        c[k]=B[j];
        j++ , k++;
    }

    for(int i=0; i<n+m; i++){
        cout<<c[i]<<" ";
    }
}