#include<iostream>
using namespace std;
int main(){
    string st;
    getline(cin , st);
    int n = st.size();
    // cout<<n;
    int i=0; int j=n-2;
    if(st[i]==st[j] and st[i+1] == st[j+1]){
        cout<<"Mogambo is happy";
    }else{
        cout<<"Mogambo is sad";
    }
}