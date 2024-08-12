#include<iostream>
#include<vector>

using namespace std;
int algorithm(vector<int>v ,int target){
    int ans=-1;
    int start=0;
    int end=v.size()-1;
    int mid=(start+end)/2;
    while(start<=end){
        if(target==v[mid]){
            //store ans and then left.
              ans=mid;
              end=mid-1;
        }
        else if(target>v[mid]){
            //we have to search right in this case.
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return ans;
}
int main(){
vector<int>v{1,3,3,3,3,4,4,4,4,6,7}; 
int target=4;
int firstOccurenceIndex=algorithm(v,target);
cout<<"index is: "<<firstOccurenceIndex<<endl;
auto ans2=lower_bound(v.begin(),v.end(),target);
cout<<"ans2 is"<<ans2-v.begin()<<endl;
return 0;
}