#include<iostream>
using namespace std;
int main(){
    string wordA , wordB;
    cin>>wordA>>wordB;
    if(wordA<wordB){
        cout<<'A';
    }else if(wordA == wordB){
        cout<<"Equal";
    }else{
        cout<<'B';
    }
}