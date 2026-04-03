#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    };

    //print the element in the asked WAVE-1 
    for(int row=0; row<n; row++){
        //for right
        if(row%2==0){
            for(int col=0; col<m; col++){
                cout<<arr[row][col]<<" ";
            };
        }
        //for left 
        else if(row%2!=0){
            for(int col=m-1; col>=0; col--){
                cout<<arr[row][col]<<" ";
            }
        }
    }
}