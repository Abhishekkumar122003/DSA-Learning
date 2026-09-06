#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x;
    cin>>x;
    if(x==1){
        cout<<2<<endl;
    }else if(x == 2){
        cout<<3<<endl;
    }else{
        cout<<1<<endl;
    }
}