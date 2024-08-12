#include<iostream>
using namespace std;
bool checkKey(string str,int i,int n,char key){
    if(i>=n){
        //key not found
        return false;

    }
    // 1 case solve kardo
    if(str[i]==key){
        return true;
    }
    bool ans = checkKey(str,i+1,n,key);
    return ans;
}
int main(){
 string str = "loveumaaa";
 int i=0;
 int n=str.length();
 char key='e';
//  if(checkKey(str,i,n,key)){
//    cout<<"founded key";
//  }
//  else{
//     cout<<"key not found"<<endl;
//  }
 bool ans=checkKey(str,i,n,key);
 cout<<ans<<endl;
 return 0;
}