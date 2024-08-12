#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
   void solve(vector<int>&arr,int sum,int i,int&maxi){
    
    // base case
    if(i>=arr.size()){
        maxi=max(sum,maxi);
        return;
    }
    // include
    solve(arr,sum+arr[i],i+2,maxi);
    //exclude
    solve(arr,sum,i+1,maxi);
   }

int main(){
    vector<int>arr{2,1,10,4,9};
    int sum=0;
    int i=0;
    int maxi=INT_MIN;
    solve(arr,sum,i,maxi);
    cout<<maxi;
    return 0;
}
