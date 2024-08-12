#include<iostream>
using namespace std;
int main(){
    int arr[9]={12,44,55,66,33};
    int i=0;
    cout<<arr[i]<<endl;
    cout<<i[arr]<<endl; 
    cout<<*(arr+i)<<endl;
    cout<<*(i+arr)<<endl;
    //6,7,8,9 all are same things.
    // arr = arr+2;  this is wrong

    int *p=arr;
    p=p+2;//we can use pointer to represent the subpart of array

return 0;
}