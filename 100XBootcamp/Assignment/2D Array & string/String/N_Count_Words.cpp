#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin , s);
    int n = s.size();
    int counter=0;
    for(int i=0; i<n; i++){
        if(s[i] == ' '){
            counter++;
        }
    };

    cout<<counter+1;
}