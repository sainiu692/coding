#include<iostream>
using namespace std;
void lastOccRTL(string&s,char x,int i,int&ans){

  //base case 
  if(i<0){
    return;
  }

  // 1case solve
  if(s[i]==x){
    ans=i;
    return;
  }
  lastOccRTL(s,x,i-1,ans);
}
int main(){
  string s;
  cin>>s;
  char x;
  cin>>x;
  int i=s.length()-1;
  int ans=-1;
  lastOccRTL(s,x,i,ans);
  cout<<ans<<endl;
}
