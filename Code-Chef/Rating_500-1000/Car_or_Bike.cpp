#include<iostream>
using namespace std;

    void solve(){
        int Xtime, Ytime;
        cin>>Xtime>>Ytime;
        if(Xtime<Ytime){
            cout<<"BIKE"<<endl;
        }else if(Xtime>Ytime){
            cout<<"CAR"<<endl;
        }else{
            cout<<"SAME"<<endl;
        }

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