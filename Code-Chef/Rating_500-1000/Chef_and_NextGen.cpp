  #include<iostream>
  using namespace std;

  void solve(){
    int a,b,x,y;
    cin>>a>>b>>x>>y;
    if(a*b <= x*y){
        cout<<"Yes"<<"\n";
    }else{
        cout<<"No"<<endl;
    }

  }

  int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
  }