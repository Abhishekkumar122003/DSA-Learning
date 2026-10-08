#include<iostream>
using namespace std;
#define int long long
void solve(int n){

    int cur=1;
    while(cur <= n){
        cur <<=1;
    }
    cur >>=1;

    while(n >0){
        if(cur <= n){
            cout<<cur<<" ";
            n -=cur;
        }
        cur >>=1;
    }

}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    solve(n);
}