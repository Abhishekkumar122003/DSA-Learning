#include<iostream>
#include<cctype>
using namespace std;
int main(){
    int n, k;
    cin>>n>>k;
    string s;
    cin>>s;
    for(char &ch : s){
        ch = tolower(ch);
    }
    int count=0;
    for(int i=0; i<k; i++){
        if(s[i]=='a' || s[i]=='e' ||s[i]=='i' ||s[i]=='o'||s[i]=='u'){
            count++;
        }
    }
    cout<<count<<" ";
    for(int i=k; i<n; i++){
         if(s[i]=='a' || s[i]=='e' ||s[i]=='i' ||s[i]=='o'||s[i]=='u'){
            count++;
        }
         if(s[i-k]=='a' || s[i-k]=='e' ||s[i-k]=='i' ||s[i-k]=='o'||s[i-k]=='u'){
            count--;
        }
        cout<<count<<" ";
    }
}