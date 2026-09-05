 #include<iostream>
 using namespace std;
 void solov(){
    int x,y,z;
    cin>>x>>y>>z;
    int time = y/x;
    if(z> time){
        cout<<z-time<<"\n";
    }else{
        cout<<0<<endl;
    }
 }

 int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solov();
    }
 }