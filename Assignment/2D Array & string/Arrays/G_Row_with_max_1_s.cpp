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
    }
;
    //for the index of row which has highest number of 1's
    int index =-1 , x=0;
    for(int row=0; row<n; row++){
        int count=0;
        for(int col=0; col<m; col++){
            if(arr[row][col ]== 1){
                count++;
            }
    }
    if(x<count){
        x=count;
        index=row;
    }
    }
    cout<<index;
}