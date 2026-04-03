#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int j=s.size()-1;
    int i=0;
    while(i<=j){
        swap(s[i] , s[j]);
        i++;
        j--;
    }
    cout<<s;
}