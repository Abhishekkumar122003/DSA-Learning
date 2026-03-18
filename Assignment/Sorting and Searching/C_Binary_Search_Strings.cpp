#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string names[n];
    for(int i=0; i<n; i++){
        cin>>names[i];
    }
    string target;
    cin>>target;

    // for(int i=0; i<n; i++){
    //     cout<<names[i];
    //     cout<<"\n";
    // }
    // cout<<target;
    // cout<<names[0];
    // if(names[2]==target){
    //     cout<<"yesss";
    // }
    int left=0;
    int  rig= sizeof(names)/sizeof(names[0])-1;
    bool flag = false;
    while(left <= rig){
        int mid = (left + rig)/2;
        //chech if at names[mid]==target or not
        if(names[mid] == target){
            flag=true;
            break;
        }

        //check is the target name is greater then name at mid if yes then move you left right side of mid if not move you right to left side of mid
        if(names[mid] < target){
            left = mid +1;

        }else{
            rig = mid -1;
        }
    };

    if(flag == true){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}