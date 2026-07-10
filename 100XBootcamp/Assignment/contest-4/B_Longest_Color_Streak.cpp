#include<iostream>
#define int long long
using namespace std;
signed main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int maxStreak=0;
    int currentStreat=1 ;
    for(int i=1; i<n; i++){
        if(arr[i-1] == arr[i]){
            currentStreat++;
        }else{
            currentStreat =1;
        }
            maxStreak = max(currentStreat , maxStreak);

    }
    cout<<maxStreak;
}