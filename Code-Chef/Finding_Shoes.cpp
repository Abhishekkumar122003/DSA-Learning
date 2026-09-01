#include<iostream>
using namespace std;

void solve(){
    int N,M;
   cin>>N>>M;
   (M>=N)? cout<<N<<"\n" : cout<<N+(N-M)<<"\n";
    
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