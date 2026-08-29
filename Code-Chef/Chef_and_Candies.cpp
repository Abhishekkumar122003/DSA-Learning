#include<iostream>
using namespace std;

    void solve(){
        int childerns,candies;
        cin>>childerns>>candies;
        if(childerns>candies){
            int packets = (childerns - candies)/4;
            if((childerns-candies)%4 != 0){
                packets++;
            }
            cout<<packets<<endl;
        }else{
            cout<<0<<endl;
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