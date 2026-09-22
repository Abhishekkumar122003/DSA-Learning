#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int x,y,r;
    cin>>x>>y>>r;
    int total=(30*x + r)/30;
    int num_of_plate = total/y;
    if(total %y != 0){
        num_of_plate++;
    }
    cout<<num_of_plate<<"\n";

//    cout<<1%2;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
}