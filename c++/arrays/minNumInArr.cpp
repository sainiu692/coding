#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[]={541,2844,37,544,54845,1546,4957,188,59};
    int minNum=INT_MAX;
    int size=9;
    for(int i=0;i<size;i++){
        if(arr[i]<minNum){
             minNum=arr[i];
        }
    }
    cout<<"minimum number in the array is: "<<minNum<<endl;
    return 0;
}