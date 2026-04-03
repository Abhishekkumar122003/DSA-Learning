#include<iostream>
using namespace std;
int main(){
    string s;
    char c1 , c2;
    cin>>s>>c1>>c2;
    int n=s.size();
    for(int i=0; i<n; i++){
        if(s[i] == c1){
            s[i] = c2;
        }
    };
    cout<<s;
}