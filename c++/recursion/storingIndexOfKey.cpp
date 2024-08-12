#include<iostream>
#include<vector>
using namespace std;
void checkKey(string str,int i,int n,char key,vector<int>&ans){
    //baswe case
    if(i>=n){
        return;
    }
    if(str[i]==key){
        ans.push_back(i);
    }
    // baki recursion dekhega
         checkKey(str,i+1,n,key,ans);


}
int main(){
    string str="ffucfku";
    int i=0;
    int n=str.length();
    char key='f';
    vector<int>ans;
    checkKey(str,i,n,key,ans);
    cout<<"printing ans"<<endl;
    for(auto val:ans){
        cout<<val<<" ";
    }
    cout<<endl;
return 0;
}