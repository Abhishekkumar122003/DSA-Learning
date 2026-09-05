  #include<iostream>
 #include<bits/stdc++.h>
    using namespace std;

    void total_pizza(){
        int N,X;
        cin>>N>>X;
        int total_slice=N*X;

        int totalPizza= total_slice/4;
        if(total_slice %4 != 0){
            totalPizza++;
        }
        cout<<totalPizza<<"\n";
    }


    int main(){
    int t;
    cin>>t;
    while(t--){
        total_pizza();
    }
    }
