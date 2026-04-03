#include<iostream>
using namespace std;
void call(){
    int n;
    cin>>n;
    
    int i=1;
    while(i<=n){
      
        cout<<i<<" ";
        i+=2;
       
    }
       if(n%2==0){
        while(n>1){
     
        cout<<n<<' ';
        n-=2;
         }
        }else{
            n-=1;
            while(n>1){
                cout<<n<<" ";
                n-=2;
            }
        }
   
    cout<<"\n";

}
int main(){
    int t;
    cin>>t;
    while(t>0){
        call();
        t--;
    }
}