#include<iostream>
using namespace std;

    void solve(){
        int referee=0;
        int i=4;
        while(i--){
            int num;
            cin>>num;
            if(num == 0){
                referee++;
            }
        }
        if(referee == 4){
            cout<<"IN"<<"\n";
        }else{
            cout<<"OUT"<<"\n";
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