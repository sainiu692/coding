#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{10,20,40,60,70};
    int sum=80;
    //print all pairs.
    //outer loop will traverse for each element.
    for(int i=0;i<arr.size();i++){
        int element=arr[i];

        //for every element, will travesrse on agle wala element.
        for(int j=i+1;j<arr.size();j++){
            //use this line if you want to print pairs   
   // cout<<"("<<element<<","<<arr[j]<<")"<<endl;
            if(element+arr[j]==sum){
                cout<<"pair found"<<element<<","<<arr[j]<<endl;
            }

        }
    }
}
