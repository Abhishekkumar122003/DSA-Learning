#include<iostream>
 using namespace std;
 void solov(){
    int N;
    cin>>N;
    string S[N];
    for(int i=0; i<N; i++){
        char num;
        cin>>num;
        if(num == 'T'){
            S[i]='A';
        }else if(num == 'A'){
            S[i]='T';
        }else if(num == 'G'){
            S[i]='C';
        }else if(num == 'C'){
            S[i]='G';
        }
    }
   
    for(int i=0; i<N;i++){
        cout<<S[i];
    }
    cout<<"\n";
}

 int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solov();
    }
 }