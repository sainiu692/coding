#include<iostream>
using namespace std;
int main(){
    int arr[2][2];
    int brr[3][3]={{1,2,3},{4,5,6},{7,8,9}}; 
    cout<<"printing row wise: "<<endl;

    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            cout<<brr[row][col];
        }
        cout<<endl;
    } 

    cout<<"printing column wise: "<<endl;
     for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            cout<<brr[col][row];
        }
        cout<<endl;
    }
    return 0;
}