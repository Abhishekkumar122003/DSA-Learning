#include<iostream>
#include<string>
#include<climits>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.size();
    int lower=0 , upper=0 , digit=0 , charecters=n , special=0;
    for(int i=0; i<n; i++){
        if(s[i]>='A' and s[i]<='Z'){
            upper++;
        }else if(s[i]>='a' and s[i]<='z'){
            lower++;
        }else if(s[i]>='0' and s[i]<='9'){
            digit++;
        }else{
            special++;
        }
    };

    if(charecters>=10 and upper>=1 and lower>=1 and digit>=1 and special>=1){
        cout<<"Strong";
    }else{
        cout<<"Weak";
    }
} 