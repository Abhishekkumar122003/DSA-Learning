#include<iostream>
using namespace std;
int main(){
    int arr[5] = {2,5,6,9,3};
    int highest = INT_MIN;
    int second_highest = INT_MIN ;
    for (int i = 0; i <5; i++)
    {
         if(arr[i] > highest){
            highest= arr[i];
         }
    }
    cout<<highest<<endl;

    for (int i = 0; i < 5; i++)
    {
         if (arr[i] != highest && arr[i] > second_highest)
         {
             second_highest=arr[i];
         }
         
    }
    cout<<second_highest;
    

}