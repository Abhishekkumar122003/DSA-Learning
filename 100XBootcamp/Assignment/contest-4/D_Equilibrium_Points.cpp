#include<iostream>
using namespace std;
int main(void){
    int n;
    cin>>n;
    int count=0;
    int pre[n+1];
    int sum=0;
    pre[0]=0;
    for(int i=0; i<n; i++){
        int num;
        cin>>num;
        sum+=num;
        pre[i+1]=sum;
    }
    for (int i = 1; i <= n; i++)
    {
        if(pre[i] == pre[n]-pre[i-1]){
            count++;
        }
    }
    cout<<count;
    
} 
