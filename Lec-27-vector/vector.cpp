#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int> v;

    //Size and Capacity of the vector
    cout<<"Size of the Vector 'V' "<< v.size()<<"\n";
    cout<<"Capacity of the Vector 'V' "<< v.capacity()<<"\n";

    v.push_back(1);
    cout<<"Size of the Vector 'V' "<< v.size()<<"\n";
    cout<<"Capacity of the Vector 'V' "<< v.capacity()<<"\n";

    v.push_back(2);
    cout<<"Size of the Vector 'V' "<< v.size()<<"\n";
    cout<<"Capacity of the Vector 'V' "<< v.capacity()<<"\n";

    v.push_back(2);
    cout<<"Size of the Vector 'V' "<< v.size()<<"\n";
    cout<<"Capacity of the Vector 'V' "<< v.capacity()<<"\n";   //here Capacity =4 Size =3;

    
}