  #include<iostream>
  using namespace std;

  void solve(){
    int total_glass;
    cin>>total_glass;

    // percentage value = (percentage/100)*total_value;

    int each_glass_price=50;
    cout<<(long long)((.3*each_glass_price*total_glass))<<endl;

    // here i use "long long" becaouse the when total_galss count become to large it become double so to show it in integer form i have to convert it into long long formet
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