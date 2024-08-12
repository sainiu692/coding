#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,3,5,2,6,2,5,2,2,2,2,2};
    int size=16;
    int numTwo=0;
    for(int i=0;i<size;i++){
        if(arr[i]==2){
            numTwo++;
        }
    }
    cout<<"Number of two: "<<numTwo<<endl;
}