#include<iostream>
using namespace std;
int main(){
    string name;
    cin>>name;
    int n = name.size();
    for(int i=0; i<n;i++){
        cout<<name[i];
    };
}