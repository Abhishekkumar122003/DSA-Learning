#include<iostream>
 using namespace std;
 void solov(){
    int N,X,K;
    cin>>N>>X>>K;
    int totalBottle = K/X;
    if(totalBottle == 0){
        cout<<0;
    }else if(totalBottle >= N){
        cout<<N;
    }else if(totalBottle < N){
        cout<<totalBottle;
    }
    cout<<"\n";
}

 int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solov();
    }
 }