#include<iostream>
using namespace std;
void rotate(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int d;
    cin>>d;
    // while(d>0){
    //    int  tem=arr[0];
    //     for(int i=1; i<n; i++){
    //         arr[i-1]=arr[i];
    //     };
    //     arr[n-1] = tem;
    //     d--;
    // }
    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // } -> slow approch i just need to print not mutated the array first then print

    if(n!=0){
        //first print from (d to (n-1)) and then print from (i=0 to i<d)
        for(int i=d; i<n; i++){
            cout<<arr[i]<<" ";
        }
        for(int i=0; i<d; i++){
            cout<<arr[i]<<" ";
        }
    }
    cout<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t>0){
        rotate();
        t--;
    }
}