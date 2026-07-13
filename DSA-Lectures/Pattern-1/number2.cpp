// #include<iostream>
// using namespace std;
// int main(){
//     // int num=1;
//     int row, col;
//     cin>>row>>col;
//     for(int i=1;i<=row;i++){
//         for(int j =1;j<=col;j++){
//             // cout<<num<<" ";
//             // num++;

//         }
//         cout<<"\n";
//     }
// }

//without using any third varible we can do
// cout<<(i-1)*row+col<<" "; in place of line number 9.
#include<iostream>
using namespace std;
int main(){;
    int row, col;
    cin>>row>>col;
    for(int i=1;i<=row;i++){
        for(int j =1;j<=col;j++){
           cout<<(i-1)*row+col<<" ";
            
        }
        cout<<"\n";
    }
}
