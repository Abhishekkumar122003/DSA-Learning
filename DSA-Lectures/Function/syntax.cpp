#include<iostream>
using namespace std;

int factorial(int n){
    int ans=1;
    for(int i=1; i<=n; i++){
        ans*=i;
    }
    return ans;
}

int main(){

    int n, r;
    cin>>n>>r;

    //for n factorial
    int nfact=factorial(n);
    cout<<nfact<<"\n";
    //for r factorial
    int rfact=factorial(r);
    cout<<rfact<<"\n";
    //for(n-r)factorial
    int nrfact=factorial(n-r);
    cout<<nrfact<<"\n";

    //print ncr
    cout<<"faaah"<<"\n";
    cout<<nfact/(rfact*nrfact);
}