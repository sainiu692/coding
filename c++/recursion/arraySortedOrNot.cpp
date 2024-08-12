#include<iostream>
#include<vector>
using namespace std;
bool checkSorted(vector<int>&arr,int i,int n){
    //base case
    if(i==n-1){
        return true;
    }
    //1 case solve krna hai
    if(arr[i+1]<=arr[i]){
        return false;
    }
    //baki recurson
    checkSorted(arr,i+1,n);

    }
int main(){
// vector<int>arr{10,2,0,5,515,50,451};
vector<int>arr{1,2,3,4,5};
int n=arr.size();
int i=0;
if(checkSorted(arr,i,n)){
   cout<<"sorted"<<endl;
}
else{
       cout<<"not sorted"<<endl;

}

}

