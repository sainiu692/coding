#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int lastOccurence(vector<int>arr,int target){
    int start=0;
    int end=arr.size()-1;
    int ans=-1;
    int mid=(start+end)/2;
    while(start<=end){
       if(arr[mid]==target){
        //ans store
          ans=mid;
          //right search
          start=mid+1;
       }
       else if(target<arr[mid]){
             //left search
             end=mid-1;
       }
       else if(target>arr[mid]){
        //right search
        start=mid+1;
       }
       mid=start+(end-start)/2;
    }
    return ans;
}
int main(){
    vector<int>v{1,3,7,7,7,7,7,7,9};
    int target=7;
    int system=lastOccurence(v,target);
    cout<<system<<endl;
    auto ans2=upper_bound(v.begin(),v.end(),target);
    cout<<"ans2 is "<<ans2-v.begin()<<endl;
    //this upper bound predefined function has giving wrong answer.
    return 0;
}