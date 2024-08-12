#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int>arr{10,1,7,6,14,9};
    int n=arr.size();
    
    //insertion sort
    //outer loop representing rounds.
    for(int round=1;round<n;round++)
    {
        //step-A -->fetching element
        int val=arr[round];
         int j=round-1;
        //step-B --> compare
        //inner loop for comparing
        for(;j>=0;j--)
        {
          if(arr[j]>val){ 
            //step-3 --> shift
            arr[j+1]=arr[j]; 
          }
          else
          {
            break;
          }
        }
        //step-D --> copy.
         arr[j+1] = val;

    }
    //printing
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}