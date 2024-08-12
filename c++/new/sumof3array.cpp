#include<iostream>
using namespace std;
int main(){
    int crr[5];
    int arr[5]={1,2,3,4,5};
    int brr[5]={6,7,8,9,4};
    int n=5;
    int m=5;
    for(int i=0;i<5;++i){
        crr[i]=arr[i]+brr[i];
    }
    for(int h=0;h<5;h++){
        cout<<crr[h]<<" ";
    }

    return 0;

}