#include<iostream>
using namespace std;
int main(){
    int arr[]={0,0,0,1,1,0,0,1,0,1,1,0,1,0,1,};
    int size=15;
    int numZero=0;
    int numOne=0;
    for(int i=0;i<size;i++)
    {
        //if zero find,increment,numZero.
        if(arr[i]==0)
        {
            numZero++;
        }
        else
        {
            numOne++;
        }
    }
    //  for(int i=0;i<size;i++)
    //  {
    //     //if one found,increment numOne.
    //     if(arr[i]==1){
    //         numOne++;
    //     }
    // }
    cout<<"Number of zero in array: "<<numZero<<endl;
    cout<<"Number of one in array: "<<numOne<<endl;
    return 0;
    
}