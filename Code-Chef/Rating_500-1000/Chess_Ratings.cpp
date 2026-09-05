 #include<iostream>
 using namespace std;
 void solov(){
    int x,y;
    cin>>x>>y;
    int reqRating= y-x ;
    int gameReq = reqRating / 8;
    if(reqRating %8 != 0){
        gameReq++;
    }
    cout<<gameReq<<endl;
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