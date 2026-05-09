#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int lowcase=0 , upcase=0 , digit=0 , specialchar=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]>='a' and s[i]<='z'){
            lowcase++;
        }else if(s[i]>='A' and s[i]<='Z'){
            upcase++;
        }else if(s[i]>='0' and s[i]<='9'){
            digit++;
        }else{
            specialchar++;
        }
    }
int count=0;
    if(lowcase){
        count++;
    } if(upcase){
        count++;
    } if(digit){
        count++;
    } if(specialchar){
        count++;
    }

    if(count==4){
        cout<<"Strong";
    }else if(count==3){
        cout<<"Moderate";
    }
    else{
        cout<<"Weak";
    }
}