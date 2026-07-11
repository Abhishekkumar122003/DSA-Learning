#include<iostream>
#include<vector>
using namespace std;
int main(){

    // vector<int> v;

    // //Size and Capacity of the vector
    // cout<<"Size of the Vector 'V' "<< v.size()<<"\n";
    // cout<<"Capacity of the Vector 'V' "<< v.capacity()<<"\n";

    // v.push_back(1);
    // cout<<"Size of the Vector 'V' "<< v.size()<<"\n";
    // cout<<"Capacity of the Vector 'V' "<< v.capacity()<<"\n";

    // v.push_back(2);
    // cout<<"Size of the Vector 'V' "<< v.size()<<"\n";
    // cout<<"Capacity of the Vector 'V' "<< v.capacity()<<"\n";

    // v.push_back(2);
    // cout<<"Size of the Vector 'V' "<< v.size()<<"\n";
    // cout<<"Capacity of the Vector 'V' "<< v.capacity()<<"\n";   //here Capacity =4 Size =3;
    
    // vector<int> v1(5 , 1);
    // cout<<"Size of the Vector 'V1' "<< v1.size()<<"\n";
    // cout<<"Capacity of the Vector 'V1' "<< v1.capacity()<<"\n";
    // v1.push_back(3);
    // cout<<"Size of the Vector 'V1' "<< v1.size()<<"\n";
    // cout<<"Capacity of the Vector 'V1' "<< v1.capacity()<<"\n";  // here Capacity =10 Size =6

    vector<int> v2 = {1 , 2 , 3 , 4};
    cout<<v2.size()<<"\n";
    
    // v2.push_back(3);
    // cout<<"Size of the Vector 'V2' "<< v2.size()<<"\n";
    // cout<<"Capacity of the Vector 'V2' "<< v2.capacity()<<"\n";
    // v2.pop_back();
    // cout<<"Size of the Vector 'V2' "<< v2.size()<<"\n";
    // cout<<"Capacity of the Vector 'V2' "<< v2.capacity()<<"\n";
    v2.erase(v2.begin());
    cout<<"Size of the Vector 'V2' "<< v2.size()<<"\n";
    cout<<"Capacity of the Vector 'V2' "<< v2.capacity()<<"\n";
    
    v2.clear();
    cout<<"Size of the Vector 'V2' "<< v2.size()<<"\n";
    cout<<"Capacity of the Vector 'V2' "<< v2.capacity()<<"\n";
    
}