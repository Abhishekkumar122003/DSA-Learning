#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.size();
    int counta=0 , countb=0;
    for(int i=0; i<n;i++){
        if(s[i]=='a'){
            counta++;
        }
        if(s[i]== 'b'){
            countb++;
        }
    }

    if(counta == countb){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}