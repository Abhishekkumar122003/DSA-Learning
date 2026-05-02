#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
cout<<"sdfcshdi";
int start1=0, end1=n-1;
int target;
cin>>target;
int FO=-1, LO=-1, mid=0;
while(start1<end1){
    mid= start1+ (end1-start1)/2;
    if(arr[mid]==target){
        FO=mid;
        break;
    }else if(arr[mid]> target){
        end1=mid-1;
    }else{
        start1=mid+1;
    }
}
int start2=n-1, end2=0;
while(start2<end2){
    mid= end2+ (start2-end2)/2;
    if(arr[mid]==target){
        LO=mid;
        break;
    }else if(arr[mid]> target){
        end2=mid-1;
    }else{
        start1=mid+1;
    }
}
cout<<FO<<"\n "<<LO;
}