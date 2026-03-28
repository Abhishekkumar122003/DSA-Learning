#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    int n= s.size();
    int ans=0;
    int i=0;
   while(i<n){
    int count =0; 
    if(s[i] == ' '){
        i++;
        continue;
    }
    int j=i;
    while(j<n and s[j] != ' '){
        count++;
        j++;
    }
    if(ans< count){
        ans= count;
    }
    i=j;
   }
   cout<<ans;
}