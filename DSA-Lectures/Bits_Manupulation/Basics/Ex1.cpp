#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int A[5] = {4,5,2,7,9};
    cout<<"hi there"<<"\n";
    int ans1 , ans2, ans3, ans4 = A[0];
    for(int i=0; i<5; i++){
        ans1 &=A[i];
        ans2 |=A[i];
        ans3 ^=A[i];
        ans4 *=A[i];
    }
    cout<<ans1<<"  "<<ans2<<" "<<ans3<<" "<<ans4 <<"\n";

    int n=14>>2;
    cout<<n<<endl    ;
}