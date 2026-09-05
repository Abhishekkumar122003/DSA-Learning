#include<iostream>
using namespace std;

void solve(){
    int x,y;
    cin>>x>>y;
    cout<<x-(y/2);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}