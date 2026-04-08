#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int num=1;
    char ch = 'a';
    bool isNum=true;
    for(int i=1; i<=n; i++){

        for(int j=1; j<=m; j++){
         
            if(isNum){
                cout<<num;
                num++;
                if(num>9){num=1;}
            }else{
                cout<<ch;
                ch++;
                if(ch>'z'){ch='a';}
            }
            isNum=!isNum;
    }
    cout<<"\n";
}

}