#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{5,4,3,2,1};
    int n=arr.size();
    //outer loop representing -> n-1 rounds.
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        //inner loop representing index of minimums from which we are comparing.
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                //new minimum,so storing.
                minIndex=j;
            }
        }
        //swap
        swap(arr[i],arr[minIndex]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}