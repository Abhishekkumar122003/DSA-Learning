#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
    int T;
    cin>>T;
    while(T--){
        int X;
        cin>>X;
        if(10 - X >= 3){
            cout<<"Yes"<<"\n";
        }else{
            cout<<"No"<<"\n";
        }
    }
}
