#include<iostream>
#include<limits.h>
using namespace std;
//  now we use recursive function

// yhan agar khali int maxi pass krenge to pass by value hoga to copy bnegi yani 
//changes main function mein shoe nahi honge
    int printMax(int arr[],int n,int i,int&maxi){

        //base case
        if(i>=n){
            // array khatam
            return maxi;
        }
         
         // 1 case solve karo
         // current element check karo for max

         if(arr[i]>maxi){
            maxi = arr[i];
         }
         printMax(arr,n,i+1,maxi);



    }
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,15};
    int maxi=INT_MIN;
    int n=9;
    int i=0;
    // for(int i=0;i<n;i++){
    //     if(arr[i]>maxi){
    //         maxi=arr[i];
    //     }
    // }


//  below is another approach using max function

    // for(int i=0;i<n;i++){
    //     maxi=max(maxi,arr[i]);
    // }
    // cout<<maxi<<endl;

             cout<<printMax(arr,n,i,maxi);
             
              
    return 0;
} 

