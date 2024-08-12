#include<iostream>
using namespace std;
bool search(int arr[][3],int row,int col,int key){

cout<<"searching row wise: "<<endl;

for(int i=0;i<row;i++){
    int sum=0;
    for(int j=0;j<col;j++){
        if(arr[i][j]==key){
            return true;
        }
    }
   
}
return false;

}
int main(){
int arr[3][3];
int row=3;
int col=3;
int key;

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
    cout<<"enter the key you wnat to search: "<<endl;
    cin>>key;
   bool ans=search(arr,row,col,key);
   cout<<ans;
    return 0;
}