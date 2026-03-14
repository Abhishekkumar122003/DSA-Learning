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
    //print element in the asked WAVE-2 form
    for(int col=0; col<m; col++){
        //for top-to-bottum
        if(col%2==0){
            for(int row=0; row<n; row++){
                cout<<arr[row][col]<<" ";
            };
        }
        //for bottum-to-top
        else if(col%2!=0){
            for(int row=n-1; row>=0; row--){
                cout<<arr[row][col]<<" ";
            }
        }
    }
}