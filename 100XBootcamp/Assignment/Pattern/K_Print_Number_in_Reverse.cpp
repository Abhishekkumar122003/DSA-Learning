#include<iostream>
using namespace std;
int main(){
    string num;
    cin>>num;
    for(long long i=num.size()-1; i>=0; i--){
        cout<<num[i];
    }
}