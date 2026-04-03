#include<iostream>
using namespace std;
int main(){
    string st;
    cin>>st;
    int n = st.size();
    for(int i=0; i<n; i++){
        if(st[i] >= 'a' and st[i]<='z'){
            st[i] = st[i]- 32;
        }else{
            st[i] = st[i] + 32;
        }
    }
    cout<<st;
}
