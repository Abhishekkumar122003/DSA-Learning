#include<iostream>
#define int long long
using namespace std;
signed  main(){
    int n, k;
    cin>>n>>k;
    
    int arr[n];
    int max_sum=0;
    for(int i=0 ;i<n; i++){
        cin>>arr[i];
        if(i<k){
            max_sum+=arr[i];
        }
    }
if(n==1){
        cout<<arr[0];
        return NULL;
    }
    int left=0; 
    int right=k;
    int sum = max_sum;
    while(right<n){
        sum  += arr[right] - arr[left];
        if(sum> max_sum){
            max_sum = sum;
        }
        right++ , left++;
    }

    cout<<max_sum;

}
