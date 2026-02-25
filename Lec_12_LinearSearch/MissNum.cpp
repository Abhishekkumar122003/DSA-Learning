#include<iostream>
using namespace std;
int main(){
    int N , element ;
    cout<<"Enter the number to find the the missing number in this range"<<endl;
    cin>>N;
    int idealSum = N*(N+1)/2;
    cout<<idealSum;
    int  arr[N-1] ;
    cout<<"Enter the element for the element: ";
    for (int i = 0; i < N-1; i++)
    {
          cin>>element;
          arr[i] = element;
    }
    int sum=0;
    
    for (int  i = 0; i < N-1; i++)
    {
        sum +=arr[i];
    }
    cout<<endl<<sum;
    cout<<"the  missing number is: "<<idealSum - sum;
    
}