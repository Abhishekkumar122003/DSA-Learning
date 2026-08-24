#include<iostream>
using namespace std;
const int N=1e6;
int goodNum[N+1];
void pre_compute(){
    for(int i=0; i<=N; i++){
        goodNum[i]=i;
    }

    for(int i=2; i<=N; i++){
        for(int j=i*2; j<=N; j+=i){
            goodNum[j]=min(goodNum[j] , i);
        }
    }

}
void Good_Prime(){
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        if(x==0||x==1){
            cout<<"NO"<<"\n";
        }else{
            if(goodNum[x] == goodNum[goodNum[x]]){
                cout<<"YES"<<"\n";
            }else{
                cout<<"NO"<<"\n";
            }
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    pre_compute();
    Good_Prime();
}