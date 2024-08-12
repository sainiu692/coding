#include<iostream>
#include<vector>
using namespace std;
bool sorted(vector<int>v,int n,int i){
    // base casae 
    if(i>=n-1){
        return true;
    }

    // 1 case khud solve krna hai
    if(v[i]>=v[i+1]){
        return false;
    }
 
     return sorted(v,n,i+1);
}
int main(){
    vector<int>v={1,2,3,4,5,88};
    int n=v.size();
    int i=0;
    cout<<sorted(v,n,i);
    
    return 0;
}
