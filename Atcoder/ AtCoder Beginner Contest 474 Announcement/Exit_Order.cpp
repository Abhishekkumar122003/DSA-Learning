#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int A[n+1];
    A[0]=0;
    for(int i=1 ; i<=n; i++){
        cin>>A[i];
    }

    int counter = n/10;
    if(n%10 != 0){
        counter++;
    }
    // cout<<counter<<"\n";
    bool flag = true;
    int i=1, j=10;
    while(counter--){
                // cout<<i<<" "<<j<<" ";

        for(int k=i; k<=j; k++){
            // cout<<k<<"\n";
            if(A[k] > j){
                flag=false;
                // cout<<A[k]<<" right there";
                break;
            }
        }
        i+=10;
        j+=10;
        if(j>n){
            j=n;
        }
        // cout<<i<<" "<<j<<" ";
    }
    if(flag == false){
        cout<<"No";
    }else {
        cout<<"Yes";
    }
}