#include<iostream>
using namespace std;
int main(){
    int n,m,x;
    cin>>n>>m>>x;
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        };
    };

    //for finding weather the integer(x) is present or not int the matrix;
    bool present = false;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]==x){
                present=true;
            };
        };
    };
    cout<<boolalpha<<present;
}