#include<iostream>
#include<vector>
using namespace std;
int main()
{
//     vector<int>arr{1,2,3,4,5,6};
//     vector<int>brr{3,3,4,};
//     vector<int>ans;
// //outer loop on arr vector.
// for(int i=0;i<arr.size();i++){
// int element=arr[i];
// for(int j=0;j<brr.size();j++){
//     if(element==brr[j]){
//         //marking
//         brr[j]=-1;
//         ans.push_back(element);
//         //break;//use only one line 15 or 17.
//     }
// }
// }
// for(auto value: ans){
//     cout<<value<<" ";
// }






 vector<int>arr{1,2,3,4,5,6};
    vector<int>brr{3,3,4,};
    vector<int>ans;
//outer loop on arr vector.
for(int i=0;i<brr.size();i++){
int element=brr[i];
for(int j=0;j<arr.size();j++){
    if(element==arr[j]){
        //marking
        arr[j]=-1;
        ans.push_back(element);
        //break;//use only one line 15 or 17.
    }
}
}
for(auto value: ans){
    cout<<value<<" ";
}

return 0;
}