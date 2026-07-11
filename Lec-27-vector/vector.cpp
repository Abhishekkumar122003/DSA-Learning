#include<iostream>
#include<vector>
#include<bits/stdc++.h>
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

    // vector<int> v2 = {1 , 2 , 3 , 4};
    // cout<<v2.size()<<"\n";
    
    // v2.push_back(3);
    // cout<<"Size of the Vector 'V2' "<< v2.size()<<"\n";
    // cout<<"Capacity of the Vector 'V2' "<< v2.capacity()<<"\n";
    // v2.pop_back();
    // cout<<"Size of the Vector 'V2' "<< v2.size()<<"\n";
    // cout<<"Capacity of the Vector 'V2' "<< v2.capacity()<<"\n";
    // v2.erase(v2.begin()+1);
    // cout<<"Size of the Vector 'V2' "<< v2.size()<<"\n";
    // cout<<"Capacity of the Vector 'V2' "<< v2.capacity()<<"\n";
    
    // v2.clear();
    // cout<<"Size of the Vector 'V2' "<< v2.size()<<"\n";
    // cout<<"Capacity of the Vector 'V2' "<< v2.capacity()<<"\n";

    vector<int> vnew;
    vnew.push_back(1);
    vnew.push_back(2);
    vnew.push_back(3);
    vnew.push_back(4);
    vnew.push_back(5);
    vnew.push_back(6);

    //Delete element from vector
    // vnew.pop_back();
    // cout<<"Size of the Vector 'vnew' "<< vnew.size()<<"\n";
    // cout<<"Capacity of the Vector 'vnew' "<< vnew.capacity()<<"\n";

    // vnew.erase(vnew.begin() +2);
    // cout<<"Size of the Vector 'vnew' "<< vnew.size()<<"\n";
    // cout<<"Capacity of the Vector 'vnew' "<< vnew.capacity()<<"\n";
    
    // Insert element in vector

    // vnew.insert(vnew.begin() +1 , 50);
    // cout<<"Size of the Vector 'vnew' "<< vnew.size()<<"\n";
    // cout<<"Capacity of the Vector 'vnew' "<< vnew.capacity()<<"\n";
    // for(int i=0; i<vnew.size(); i++){
    //     cout<<vnew[i]<<"\n";
    // }


    //Front method to print the element of the vector
    vector<int> arr;
    arr.push_back(3);
    arr.push_back(6);
    arr.push_back(4);
    arr.push_back(2);
    arr.push_back(1);
    arr.push_back(5);

    // cout<<arr[0]<<endl; //to print the element or
    // cout<<arr.front()<<endl;
     
    //Sorting in vector
    sort(arr.begin() , arr.end()); // increasing Order 
    for(auto i: arr){
        cout<<i<<"\n";
    }
    cout<<endl;
    // sort(arr.rbegin() , arr.rend());
    // for(auto i: arr){
    //     cout<<i<<"\n";
    // }
    cout<<endl;

    sort(arr.begin() , arr.end(), greater<int>());
    for(auto i: arr){
        cout<<i<<endl;
    }

    
    
}