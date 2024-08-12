#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[]={1,2,3,11,622,7,8};
    int size=8;
    int maxNum=INT_MIN;
    //initialising the maxNum variable with minimum possible integer 
    for(int i=0;i<size;i++){
        if(arr[i]>maxNum){
            maxNum=arr[i];
        }
    }
    cout<<"maximum number in array is: "<<maxNum<<endl;

}