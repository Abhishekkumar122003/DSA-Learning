#include<iostream>
// #include<string>
// #include<climits>

using namespace std;
int main(){
    string s;
    cin>>s;
    bool flag=true;
    
    int i=0 , j=s.length()-1;
    while(i<=j){
        if(s[i] != s[j]){
            flag=false;
        };
        i++ , j--;
    }

    if(flag == true){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}