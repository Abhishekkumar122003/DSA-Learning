#include<iostream>
using namespace std;
int main(){
        int n;
        cin>>n;
        int A[n];
        for(int i=0; i<n; i++){
            cin>>A[i];
        }
        int pass=1;
        //applying insertion-Sort
        for(int i=1;i<n;i++){
            int temp=A[i];
            int j=i-1;
            int shifted=0;

            while (j>=0 and A[j] > temp ){
                A[j+1]=A[j];
                j--;
                shifted++;
            }
            A[j+1]= temp;
            
            cout<<"Pass "<<pass<<": ";
            pass++;
            for(int k=0;k<n;k++){
                cout<<A[k]<<" ";
            };
            cout<<", ";
           for(int h=0;h<=i;h++ ){
            cout<<A[h]<<" ";
           }
           cout<<"| ";
           for(int l=i+1;l<n; l++){
            cout<<A[l]<<" ";
           }
           cout<<", shifts = "<<shifted;
           cout<<"\n";
        }
    }
    