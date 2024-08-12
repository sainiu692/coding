#include<iostream>
using namespace std;
void print(int col[],int size){
    for(int i=0;i<size;i++){
        cout<<col[i]<<endl;
    } 
}
int increment(int box[],int size){
    for(int i=0;i<size;i++){
         box[i]=box[i]+10;
         }
    print(box,size);
}
int main(){
    int size=2;
    int arr[]={5,6};
    increment(arr,size);
    print(arr,size);
    return 0;
}