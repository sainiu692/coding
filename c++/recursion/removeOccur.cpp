#include<iostream>
using namespace std;
void removeOccur(string&s,string&part){
  int found=s.find(part);
  if(found!=string::npos){
    // part has been located
    // please remove it
    string left_part=s.substr(0,found);
    string right_part=s.substr(found+part.size(),s.size());
    s=left_part+right_part;
    removeOccur(s,part);
  }
  else{
    // base case
    //all ocurence of part has been removed from s
    return;
    }
}
int main(){
  string s;
  cin>>s;
  string part;
  cin>>part;
  removeOccur(s,part);
  cout<<s;
  return 0;
}