#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5,};
    int sizea=5;
    int brr[2]={1,2};
    int sizeb=2;
    vector<int>ans;
    //push all ements of arr.
    for(int i=0;i<sizea;i++){
       ans.push_back(arr[i]);
    }
    //push all elements of brr.
    for(int i=0;i<sizeb;i++){
        ans.push_back(brr[i]);
    }

    //printing ans vector.
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
