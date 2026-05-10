#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    if(n==1){
        cout<<count;
        return 0;
    }
    for(int i=2; i<=n; i++){
        bool flag = true;
        for(int j=2; j*j<=i; j++){
            if(i % j == 0){
                flag= false;
                break;
            }
        }
        if(flag == true){
            count++;
        }
    }
    cout<<count;
}