#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int>&arr,int s,int e,int target){
//base case
if(s>e){
    return -1;
}
int mid=(s+e)/2;
if(arr[mid]==target){
    return mid;
}
if(arr[mid]<target){
    return binarySearch(arr,mid+1,e,target);
}
else{
        return binarySearch(arr,s,mid-1,target);
}

}
using namespace std;
int main(){
   vector<int>arr{1,2,3,4,5};
    int target=4;
    int n = arr.size();
    int s=0;
    int e=n-1;
    int ans=binarySearch(arr,s,e,target);
    cout<<"index of target is "<<ans<<endl;
    return 0;

}