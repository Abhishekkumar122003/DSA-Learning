#include<iostream>
using namespace std;
const int N=1E6;
bool isPrime[N+1];
void pre_compute(){
    for(int i=2; i<=N; i++){
        if(isPrime[i]){
            for(int j=i*2; j<=N; j+=i){
                isPrime[j]=false;
            }
        }
    }
}
void Prime(){
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        if(isPrime[x]){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }

    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    fill(isPrime , isPrime+N+1, true);
    isPrime[0]=false, isPrime[1]=false;
    pre_compute();
    Prime();
}