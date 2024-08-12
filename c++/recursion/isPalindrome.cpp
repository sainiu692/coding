#include<iostream>
using namespace std;
bool isPalindrome(string&str,int s,int e){

    // base case
    if(s>=e){
        return true;
    }

    // 1 case solve
    if(str[s]!=str[e]){
      return false;
    }

    // recursive call
      return isPalindrome(str,s+1,e-1);

}
int main(){
    string str;
    cin>>str;
    int s=0;
    int e=str.length()-1;
    cout<<isPalindrome(str,s,e)<<endl;
    return 0;

}
