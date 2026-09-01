#include<iostream>
using namespace std;

int A[200];

void solve(){
    A[0]=1;
    int digits=1;
  int n;
  cin>>n;

  for(int i=2; i<=n; i++){
    int carry=0;

    for(int j=0; j<digits; j++){
        int num=A[j]*i + carry;
        A[j] = num % 10;
        carry = num / 10;
    }
    while(carry >0 ){
        A[digits] = carry %10;
        carry /= 10;
        digits++;
    }
  }
  for(int i=digits-1; i>=0; i--){
    cout<<A[i];
  }
  cout<<endl;

    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
         solve();
    }
}