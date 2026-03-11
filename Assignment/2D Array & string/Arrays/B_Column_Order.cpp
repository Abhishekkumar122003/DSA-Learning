#include<iostream>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0; j<m;j++){
            cin>>arr[i][j];
        }
    };
    //print colunm wise all the elements
    for(int col=0; col<m; col++){
        for(int row=0; row<n; row++){
            cout<<arr[row][col]<<" ";
        };
        
    }
}