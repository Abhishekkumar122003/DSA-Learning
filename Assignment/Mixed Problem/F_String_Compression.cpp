#include<iostream>
using namespace std;
void printchar(){
    string s;
    cin>>s;
    int i=0 , n=s.size();
    while(i<n){
        int count=0;
       int j=i;
       char ch = s[i];
       while(j<n and s[i] == s[j]){
        count++ ;
        j++ ;
       }
       cout<<ch;
       if(count>1){
        cout<<count;
       }
       i=j;
       
    }
    cout<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t >0){
        printchar();
        t--;
    }
}