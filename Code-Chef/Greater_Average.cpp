#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    float num=a+b;
	    if(num/2 > c){
	        cout<<"YES"<<"\n";
	    }else{
	        cout<<"NO"<<"\n";
	    }
	}

}
