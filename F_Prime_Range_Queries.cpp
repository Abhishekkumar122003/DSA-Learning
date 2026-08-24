#include<iostream>
using namespace std;
const int N=1e6;
int Prime[N+1];
int Pri_prime[N+1];
void pre(){
    
    Prime[1]=0;
    for(int i=2; i<+N; i++){
        Prime[i]=i;
    }
    for(int i=2; i<=N; i++){
        for(int j=i; j<=N; j+=i){
            Prime[j]=min(Prime[j], i);
        }
    }
    int num=0;
    for(int i=2; i<=N; i++){
        if(Prime[i] == i){
            num++;
            Pri_prime[i]=num;
        }else{
            Pri_prime[i]=num;
        }
    }
    
}

void solve(){
    int l,r;
    cin>>l>>r;
    cout<<Pri_prime[r]-Pri_prime[l-1]<<"\n";
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    pre();
    int n;
    int q;
    cin>>n>>q;
    while(q--){
        solve();
    }
}