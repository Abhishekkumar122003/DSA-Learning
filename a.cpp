#include<iostream>
using namespace std;
int main(){
   int num=2;
   for (int i = 2; i <= 64; i++)
   {
       if(num <= 64){
           cout<<num<<" \n";
       }else{
           break;
       }
    num *= 2;
   }
   
}