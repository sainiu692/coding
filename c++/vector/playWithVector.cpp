#include<iostream>
#include<vector> 
using namespace std;
int main(){
   vector<int> arr;
   int ans=(sizeof(arr)/sizeof(int));
cout<<ans<<endl;
//insertion in vector
arr.push_back(5);
arr.push_back(16);

cout<<arr.size()<<endl;
cout<<arr.capacity()<<endl;
//printing vector
for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" "<<endl;
}
//removal or deletion in vector
arr.pop_back();
for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" "<<endl;
}
int n;
cout<<"enter the value of n: ";
cin>>n;

vector<int>brr(n,-12);
cout<<brr.size()<<endl;
cout<<brr.capacity()<<endl;

for(int i=0;i<brr.size();i++){
    cout<<brr[i]<<" ";
}
cout<<endl;
vector <int>crr={1,2,3,4,5,6,7,8,9};
for(int i=0;i<crr.size();i++){
    cout<<crr[i]<<" "; 
}
cout<<" vector crr is empty or not: "<<crr.empty();
cout<<endl;
vector<int>drr;
cout<<" vector drr is empty or not: "<<drr.empty();
return 0;
}