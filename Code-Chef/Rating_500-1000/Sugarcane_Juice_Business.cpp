  #include<iostream>
  using namespace std;

  void solve(){
    int total_glass;
    cin>>total_glass;

    // percentage value = (percentage/100)*total_value;

    int each_glass_price=50;
    cout<<(long long)((.3*each_glass_price*total_glass))<<endl;

    // here i use "long long" becaouse the when (.3*each_glass_price*total_glass) ka fractional part hata do or sirf integer part do, when i use float data type but now i use int and long long
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