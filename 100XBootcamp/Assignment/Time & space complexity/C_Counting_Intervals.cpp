#include<iostream>
#include<algorithm>
using  namespace std;
void find(){
    long long T, L, R;
    cin>>T>>L>>R;
    long long count;
    if(T==1){
        count=max(0LL, R-L-1LL);
    }else if(T==2){
        count=max(0LL, R-L);
    }else if(T==3){
        count=max(0LL, R-L);
    }else{
        count=max(0LL, R-L+1LL);
    }
        cout<<count<<"\n";
       }
       


int main(){
    int q;
    cin>>q;
    while(q>0){
        find();
        q--;
    }
}