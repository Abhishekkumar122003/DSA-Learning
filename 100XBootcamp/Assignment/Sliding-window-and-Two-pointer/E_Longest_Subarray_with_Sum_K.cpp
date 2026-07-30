#include<iostream>
using namespace std;
#define int long long
signed main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
   //initialize the left and right to 0 and create sum ans max_length variable with 0 initialize as value
   int left=0 , right=0;
   int sum=0; int max_length=0;
   for(right; right<n; right++){
    sum +=arr[right];
    //this line runs when the Sum value is greater then target(X), and run until the sum< target by decreasing the value of arr[left]; left++ 
    while(sum>=k){
        sum -= arr[left];
        left++;
    }
    max_length = max(max_length , right-left+1); // this "right - left + 1"-> gives you the current window length
   }
   cout<<max_length;

}