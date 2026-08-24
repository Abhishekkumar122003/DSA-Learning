#include<iostream>
using namespace std;
const int N=1e6;

int factors[N +1];

void pre(){
    for(int i=1; i<=N; i++){
        for(int j=i; j<=N; j+=i){
            factors[j]++;
        }
    }
}
bool isPrime(int n){
    return factors[n] == 2;
}
void solve(){
    int x;
    cin>>x;
    cout<<(isPrime(factors[x]) ? "YES" : "NO") << "\n";
}
signed main(){
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    pre();

    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}