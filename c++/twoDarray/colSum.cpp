#include<iostream>
using namespace std;
void printColWiseSum(int arr[][3],int row,int col){
//row sum ->row wise traverse.
cout<<"printing row wise sum: "<<endl;

for(int i=0;i<row;i++){
    int sum=0;
    for(int j=0;j<col;j++){
        sum+=arr[j][i];
    }
    cout<<sum<<endl;
}

}
int main(){
int arr[3][3];
int row=3;
int col=3;

    cout<<"enter elements of array: "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
cout<<"printing column wise: "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
   printColWiseSum(arr,row,col);
    return 0;
}