#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        };
    };

    //for finding the minimum element at each rows
     for(int i=0; i<n; i++){
        int min = INT_MAX;
        // int min = -1;
        for(int j=0; j<m; j++){
            if(arr[i][j]<min){
                min=arr[i][j];
            }
        };
        cout<<min<<" ";
    };
}