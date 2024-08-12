#include<iostream>
using namespace std;
int main(){
    int arr[4][3];
    cout<<"enter elements of array: "<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
cout<<"printing row wise: "<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }



//    int arr[3][3];
//     cout<<"enter elements of array: "<<endl;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cin>>arr[j][i];
//         }
//     }
// cout<<"printing column wise wise: "<<endl;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
    return 0;
}