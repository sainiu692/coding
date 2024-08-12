#include<iostream>
#include<vector>
using namespace std;
void findSubarray_util(vector<int>&arr,int s,int e){
  //base case
  if(e>=arr.size()){
    return;
  }

  //1 case solve
  for(int i=s;i<=e;i++){
       cout<<arr[i];
  }
  cout<<endl;
findSubarray_util(arr,s,e+1);
}
void findSubarray(vector<int>&arr){
    for(int s=0;s<arr.size();s++){
        int e=s;
        findSubarray_util(arr,s,e);
    }
}
int main(){
  vector<int>arr{1,2,3,4,5};
  int s=0;
  int e=s;
  findSubarray(arr);
return 0;
}