#include<iostream>
 using namespace std;
 void solov(){
    int N,M;
    cin>>N>>M;
     if(N % M ==0){
        int each = N/M;
        if(each  % 2 == 0){
            cout<<"Yes";
        }else{
            cout<<"No";
        }
     }else{
        cout<<"No";
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