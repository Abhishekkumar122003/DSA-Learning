#include<iostream>
using namespace std;
int main(){
    // fiund the input char is lower case or upper case
    char cha;
    cout<<"Enter thr cherecter to find lower or upper: ";
    cin>>cha;
    if(cha>='a' or cha<='z'){
        cout<<"Lower case";
    }else if(cha>='A' or cha<='Z'){
        cout<<"Upper case";
    }
    else{
        cout<<"It's not the charecter at all";
    }
}