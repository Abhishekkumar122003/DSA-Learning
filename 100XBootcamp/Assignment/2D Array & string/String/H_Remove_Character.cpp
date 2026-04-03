#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    char c;
    cin>>s>>c;
    int n=s.size();
    for(int i=0; i<n; i++){
        if(s[i]==c){
           continue;
        }else{
            cout<<s[i];
        }
    };
    
    

}