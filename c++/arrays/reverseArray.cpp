#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int size=7;
    int start=0;
     int end=size-1;
     while(start<=end){
        //swaping the elements of an array.
        swap(arr[start],arr[end]);
         start++;
         end--;
     }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
     
}